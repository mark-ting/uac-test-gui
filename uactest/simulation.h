#pragma once
#include "uac.h"

class Simulation
{
public:
	Simulation();
	~Simulation();

	long long int getDamage() const { return total_damage_; };
	double getTime() const { return time_; };
	double getDps() const { return (total_damage_ / time_); };
	int getJams() const { return jams_; };

	long long int theoryDamage() const { return theory_damage_; };
	double theoryTime() const { return theory_time_; };
	double theoryDps() const { return (theory_damage_ / theory_time_); };
	int theoryJams() const { return theory_jams_; };

	void reset();

	void run(std::shared_ptr<Uac> uac, int num_cycles);
	void calcTheoretical(std::shared_ptr<Uac> uac, int num_cycles);

	// Cool Down Reduction Override
	void overrideCdr(bool over);
	void setCdrValue(double cdr);

	// Jam Chance Override
	void overrideJam(bool over);
	void setJamValue(double jam_chance);

	// Set Cooldown Modifiers
	void setFastFire(bool fastfire);
	void setModule(int rank);

	// Set Quirk Values
	void setBallisticQuirk(double quirk);
	void setUacQuirk(double quirk);
	void setJamQuirk(double quirk);

protected:
	double calcModifier();
	double calcCooldown(double base_cooldown) const;
	double calcJamChance(double base_jam) const { return (override_jam_ ? custom_jam_ : base_jam - jam_quirk_); }

	// Override Flags
	bool override_cdr_;
	bool override_jam_;

	// Override Values
	double custom_cdr_;
	double custom_jam_;

	// Cooldown Modifiers
	bool fastfire_;
	int module_rank_;

	// Quirk Values
	double ballistic_quirk_;
	double uac_quirk_;
	double jam_quirk_;

	// Simulation Vars
	long long int total_damage_;
	double time_;
	int jams_;

	// Theoretical Vars
	long long int theory_damage_;
	double theory_time_;
	int theory_jams_;
};
