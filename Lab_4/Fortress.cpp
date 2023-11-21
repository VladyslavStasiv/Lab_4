#include "Fortress.h"

Fortress::Fortress(int amountOfArrows, int amountOfStones, int wallThickness, int gateStatus):ShootingTower(), Catapult()
{
	ShootingTower::giveAmmo("стріла", amountOfArrows);
	Shooter::giveAmmunition("камінь", amountOfStones);
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
		std::cout << "\nВиникла помилка при відкриванні файлу." << std::endl;
	}
	else
	{
		Archer::exportClassInfo(myFile);
		Ranger::exportClassInfo(myFile);
		Catapult::exportClassInfo(myFile);
		myFile << "Товщина стін: " << wallThickness << std::endl;
		myFile << "Стан воріт: " << gateStatus << "%" << std::endl;
		myFile.close();
	}
}