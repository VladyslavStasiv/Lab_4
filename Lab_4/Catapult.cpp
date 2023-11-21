#include "Catapult.h"

Catapult::Catapult():Shooter(){}

void Catapult::shot()
{
	std::cout << "Катапульта ";
	Shooter::shot();
}

void Catapult::exportClassInfo(std::ofstream& file)
{
	file << "Катапульта: " << std::endl;
	file << "Назва амуніції: " << ammunitionName << std::endl;
	file << "Кількість амуніції: " << *amountOfAmmunition << std::endl << std::endl;
}