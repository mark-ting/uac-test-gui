#pragma once
#include "uac.h"

class Simulation
{
public:
	Simulation();
	~Simulation();

	int getDamage() const { return total_damage_; };
	double getTime() const { return time_; };
	double getDps() const { return (total_damage_ / time_); }

	int theoryDamage() const;
	double theoryTime() const;
	double theoryDps() const;

	void reset();
	void run(std::shared_ptr<Uac> uac, int num_cycles);

	// Cool Down Reduction Override
	void overrideCdr(bool over);
	void setCdrValue(double cooldown);

	// Jam Chance Override
	void overrideJamChance(bool over);
	void setJamChanceValue(double jamchance);

	// Set Modifier Flags
	void setFastFire(bool fastfire);
	void setModule(bool module);
	void setModuleRank(int rank);

protected:
	double calcModifier();
	void calcTheoretical();

	// Override Flags
	bool override_cdr_;
	bool override_jamchance_;

	// Override Values
	double custom_cdr_;
	double custom_jam_chance_;

	// Modifier States
	bool fastfire_;
	bool module_;
	int module_rank_;

	// Simulation Vars
	long long int total_damage_;
	long double time_;

	long long int theory_damage_;
	long double theory_time_;
};
