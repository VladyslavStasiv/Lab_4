#include "Ranger.h"

Ranger::Ranger() :Shooter() {}

void Ranger::shot()
{
	std::cout << "Рейнджер ";
	Shooter::shot();
}

void Ranger::exportClassInfo(std::ofstream& file)
{
	file << "Рейнджер: " << std::endl;
	file << "Назва амуніції: " << ammunitionName << std::endl;
	file << "Кількість амуніції: " << *amountOfAmmunition << std::endl << std::endl;
}
