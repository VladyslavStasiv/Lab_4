#include "Archer.h"

Archer::Archer() :Shooter() {}

void Archer::shot()
{
	std::cout << "Лучник ";
	Shooter::shot();
}

void Archer::exportClassInfo(std::ofstream& file)
{
	file << "Лучник: " << std::endl;
	file << "Назва амуніції: " << ammunitionName << std::endl;
	file << "Кількість амуніції: " << *amountOfAmmunition << std::endl << std::endl;
}

