#include "simulation.h"
#include <random>

std::mt19937 rng;
std::uniform_real_distribution<double> dist(0.0, 1.0);

Simulation::Simulation()
{
	reset();
}

Simulation::~Simulation()
{
}

void Simulation::reset()
{
	// Reset experimental vals
	total_damage_ = 0.0;
	time_ = 0.0;
	jams_ = 0;

	// Reset theoretical vals
	theory_damage_ = 0.0;
	theory_time_ = 0.0;
	theory_jams_ = 0;
}

void Simulation::run(std::shared_ptr<Uac> uac, int num_cycles)
{
	reset();

	double modifier = calcModifier();
	double cooldown = calcCooldown(uac->cooldown_);
	double jam_chance = calcJamChance(uac->jam_chance_);
	double jam_test;

	// Simulation body
	for (int cycle = 0; cycle < num_cycles; cycle++) {
		// First Shot
		total_damage_ += uac->damage_;

		// Second Shot
		jam_test = dist(rng);

		if (jam_test > jam_chance) {
			// Double Tap
			total_damage_ += uac->damage_;
		}
		else
		{
			// Jammed
			time_ += 5.0;
			jams_++;
		}

		// Cycle Weapon
		time_ += cooldown;
	}
}

void Simulation::overrideCdr(bool over)
{
	override_cdr_ = over;
}

void Simulation::setCdrValue(double cdr)
{
	custom_cdr_ = cdr;
}

void Simulation::overrideJam(bool over)
{
	override_jam_ = over;
}

void Simulation::setJamValue(double jam_chance)
{
	custom_jam_ = jam_chance;
}

void Simulation::setFastFire(bool fastfire)
{
	fastfire_ = fastfire;
}

void Simulation::setModule(int rank)
{
	module_rank_ = rank;
}

void Simulation::setBallisticQuirk(double quirk) {
	ballistic_quirk_ = quirk;
}

void Simulation::setUacQuirk(double quirk) {
	uac_quirk_ = quirk;
}

void Simulation::setJamQuirk(double quirk) {
	jam_quirk_ = quirk;
}

double Simulation::calcModifier()
{
	if (override_cdr_) {
		return custom_cdr_;
	}
	else {
		double modifier = 0.0;

		if (fastfire_) {
			modifier += 0.05;
		}
		modifier += (0.024 * module_rank_);
		modifier += ballistic_quirk_;
		modifier += uac_quirk_;

		return modifier;
	}
}

double Simulation::calcCooldown(double base_cooldown) const
{
	double modifier = 0.0;

	if (override_cdr_) {
		modifier = custom_cdr_;
	}
	else {
		if (fastfire_) {
			modifier += 0.05;
		}

		modifier += (0.024 * module_rank_);
		modifier += ballistic_quirk_;
		modifier += uac_quirk_;
	}

	return base_cooldown * (1 - modifier);
}

void Simulation::calcTheoretical(std::shared_ptr<Uac> uac, int num_cycles)
{
	double cooldown = calcCooldown(uac->cooldown_);
	double jam_chance = calcJamChance(uac->jam_chance_);

	theory_damage_ = (2 - jam_chance) * uac->damage_ * num_cycles;
	theory_time_ = (cooldown + 5 * jam_chance)  * num_cycles;
	theory_jams_ = jam_chance * num_cycles;
}