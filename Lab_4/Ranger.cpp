#include "Ranger.h"

Ranger::Ranger() :Shooter() {}

void Ranger::shot()
{
	std::cout << "�������� ";
	Shooter::shot();
}

void Ranger::exportClassInfo(std::ofstream& file)
{
	file << "��������: " << std::endl;
	file << "����� �������: " << ammunitionName << std::endl;
	file << "ʳ������ �������: " << *amountOfAmmunition << std::endl << std::endl;
}
