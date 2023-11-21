#include "Fortress.h"

Fortress::Fortress(int amountOfArrows, int amountOfStones, int wallThickness, int gateStatus):ShootingTower(), Catapult()
{
	ShootingTower::giveAmmo("�����", amountOfArrows);
	Shooter::giveAmmunition("�����", amountOfStones);
	this->wallThickness = wallThickness;
	this->gateStatus = gateStatus;
}

void Fortress::shootFromACatapult()
{
	Catapult::shot();
}

void Fortress::ExportToFile(std::ofstream& myFile, std::string path)
{
	myFile.open(path);
	if (!myFile.is_open())
	{
		std::cout << "\n������� ������� ��� ��������� �����." << std::endl;
	}
	else
	{
		Archer::exportClassInfo(myFile);
		Ranger::exportClassInfo(myFile);
		Catapult::exportClassInfo(myFile);
		myFile << "������� ���: " << wallThickness << std::endl;
		myFile << "���� ����: " << gateStatus << "%" << std::endl;
		myFile.close();
	}
}