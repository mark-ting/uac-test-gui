#include "simulation.h"
#include <random>

std::mt19937 rng;
std::uniform_real_distribution<double> dist(0.0, 1.0);

Simulation::Simulation()
{
	uac_ = NULL;
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
	total_damage_ = 0;
	time_ = 0;
}

void Simulation::run(int num_cycles)
{
	reset();

	double modifier = 0.0;

	// TODO: have variable levels of modules set
	if (module_) {
		modifier += 0.12;
	}

	if (fastfire_) {
		modifier += 0.05;
	}

	double real_cooldown = uac_->cooldown_ * (1 - modifier);
	double jam_test;

	for (int cycle = 0; cycle < num_cycles; cycle++) {
		// First Shot
		total_damage_ += uac_->damage_;

		// Second Shot
		jam_test = dist(rng);

		if (jam_test > uac_->jam_chance_) {
			// Double Tap
			total_damage_ += uac_->damage_;
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

void Simulation::setUac(std::shared_ptr<Uac> uac)
{
	uac_ = uac;
}

void Simulation::setFastFire(bool fastfire)
{
	fastfire_ = fastfire;
}

void Simulation::setModule(bool module)
{
	module_ = module;
}