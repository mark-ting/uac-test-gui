#include "simulation.h"
#include <random>

std::mt19937 rng;
std::uniform_real_distribution<double> dist(0.0, 1.0);

Simulation::Simulation()
{
	fastfire_ = false;
	module_ = false;

	total_damage_ = 0.0;
	time_ = 0.0;
}

Simulation::~Simulation()
{
}

void Simulation::reset()
{
	// Reset experimental vals
	total_damage_ = 0.0;
	time_ = 0.0;

	// Reset theoretical vals
	theory_damage_ = 0.0;
	theory_time_ = 0.0;
}

void Simulation::run(std::shared_ptr<Uac> uac, int num_cycles)
{
	reset();

	double modifier = calcModifier();
	double real_cooldown = uac->cooldown_ * (1 - modifier);
	double jam_test;

	// Simulation body
	for (int cycle = 0; cycle < num_cycles; cycle++) {
		// First Shot
		total_damage_ += uac->damage_;

		// Second Shot
		jam_test = dist(rng);

		if (jam_test > uac->jam_chance_) {
			// Double Tap
			total_damage_ += uac->damage_;
		}
		else
		{
			// Jammed
			time_ += 5.0;
		}

		// Cycle Weapon
		time_ += real_cooldown;
	}
}

void Simulation::overrideCdr(bool over)
{
	override_cdr_ = over;
}

void Simulation::setCdrValue(double cooldown)
{
	custom_cdr_ = cooldown;
}

void Simulation::setFastFire(bool fastfire)
{
	fastfire_ = fastfire;
}

void Simulation::setModule(bool module)
{
	module_ = module;
}

void Simulation::setModuleRank(int rank)
{
	module_rank_ = rank;
}

double Simulation::calcModifier()
{
	if (override_cdr_) {
		return custom_cdr_;
	}
	else {
		double modifier = 0.0;

		if (module_) {
			modifier += (0.024 * module_rank_);
		}

		if (fastfire_) {
			modifier += 0.05;
		}

		return modifier;
	}
}

void Simulation::calcTheoretical(std::shared_ptr<Uac> uac, int num_cycles)
{
	double modifier = calcModifier();
	double real_cooldown = uac->cooldown_ * (1 - modifier);

	theory_damage_ = (2 - uac->jam_chance_) * uac->damage_ * num_cycles;
	theory_time_ = (real_cooldown + 5 * uac->jam_chance_)  * num_cycles;
}