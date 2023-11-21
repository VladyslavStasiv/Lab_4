#pragma once
#include "Archer.h"
#include "Ranger.h"

class ShootingTower :public Archer, public Ranger
{
	int amountOfArrows;
protected:
	ShootingTower();
	void giveAmmo(std::string name, int count);
public:
	void shootArcher();
	void shootRanger();
};

