#include "Shooter.h"

Shooter::Shooter() : ammunitionName("стріла"), amountOfAmmunition(new int(0)) {}

void Shooter::shot()
{
	if (*amountOfAmmunition > 0)
	{
		std::cout << "Постріл! Амуніція: " << ammunitionName << std::endl;
		(*amountOfAmmunition)--;
	}
	else
	{
		std::cout << "Немає амуніції!" << std::endl;
	}
}

void Shooter::giveAmmunition(std::string ammunitionName, int count)
{
	this->ammunitionName = ammunitionName;
	*amountOfAmmunition = count;
}

void Shooter::exportClassInfo(std::ofstream& file)
{
	file << "Shooter: " << "\n";
	file << "Ammo name: " << ammunitionName << "\n";
	file << "Ammo count: " << *amountOfAmmunition << "\n";
}
