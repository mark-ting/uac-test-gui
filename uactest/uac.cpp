#include "uac.h"

std::vector<std::shared_ptr<Uac>> uac_list;

Uac::~Uac()
{
}

void loadUacs()
{
	uac_list.push_back(std::shared_ptr<Uac>(new Uac(2, 0.72, 0.15)));
	uac_list.push_back(std::shared_ptr<Uac>(new Uac(5, 1.66, 0.15)));
	uac_list.push_back(std::shared_ptr<Uac>(new Uac(10, 2.5, 0.16)));
	uac_list.push_back(std::shared_ptr<Uac>(new Uac(20, 4.0, 0.17)));
}

std::shared_ptr<Uac> selectUac(int uac) {
	switch (uac) {
	case 2:
		return uac_list[0];
	case 5:
		return uac_list[1];
	case 10:
		return uac_list[2];
	case 20:
		return uac_list[3];
	default:
		return NULL;
	}
}