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

	void reset();
	void run(int num_cycles);
	void setUac(std::shared_ptr<Uac> uac);
	void setFastFire(bool fastfire);
	void setModule(bool module);
	void setJamChance(double jam_chance);

protected:
	std::shared_ptr<Uac> uac_;
	bool fastfire_;
	bool module_;

	long long int total_damage_;
	long double time_;
};

