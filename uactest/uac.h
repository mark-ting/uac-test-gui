#pragma once
#include <vector>
#include <memory>

class Uac {
public:
	Uac(int damage, double cooldown, double jam_chance) :
		damage_(damage), cooldown_(cooldown), jam_chance_(jam_chance) {}
	~Uac();

	int damage_;
	double cooldown_;
	double jam_chance_;
};

void loadUacs();

std::shared_ptr<Uac> selectUac(int index);