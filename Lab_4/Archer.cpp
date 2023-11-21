#include "Archer.h"

Archer::Archer() :Shooter() {}

void Archer::shot()
{
	std::cout << "������ ";
	Shooter::shot();
}

void Archer::exportClassInfo(std::ofstream& file)
{
	file << "������: " << std::endl;
	file << "����� �������: " << ammunitionName << std::endl;
	file << "ʳ������ �������: " << *amountOfAmmunition << std::endl << std::endl;
}

