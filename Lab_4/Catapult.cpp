#include "Catapult.h"

Catapult::Catapult():Shooter(){}

void Catapult::shot()
{
	std::cout << "���������� ";
	Shooter::shot();
}

void Catapult::exportClassInfo(std::ofstream& file)
{
	file << "����������: " << std::endl;
	file << "����� �������: " << ammunitionName << std::endl;
	file << "ʳ������ �������: " << *amountOfAmmunition << std::endl << std::endl;
}