#pragma once
#include "Shooter.h"

class Catapult :public Shooter
{
protected:
	Catapult();
	void shot();
	void exportClassInfo(std::ofstream& file);
};

