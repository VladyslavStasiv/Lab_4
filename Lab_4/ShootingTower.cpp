#include "ShootingTower.h"

ShootingTower::ShootingTower() :Archer(), Ranger() 
{
	Archer::amountOfAmmunition = Ranger::amountOfAmmunition;
}

void ShootingTower::giveAmmo(std::string name, int count) 
{
    Archer::giveAmmunition(name, count);
}

void ShootingTower::shootArcher()
{
	Archer::shot();
}

void ShootingTower::shootRanger()
{
	Ranger::shot();
}
