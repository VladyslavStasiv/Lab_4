#pragma once
#include "Catapult.h"
#include "ShootingTower.h"

class Fortress :public Catapult, public ShootingTower
{
	int wallThickness;
	int gateStatus;
public:
	Fortress(int amountOfArrows, int amountOfStones, int wallThickness, int gateStatus);
	void shootFromACatapult();
	void ExportToFile(std::ofstream &myFile, std::string pyth);
};

