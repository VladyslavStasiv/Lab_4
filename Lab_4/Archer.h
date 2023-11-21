#pragma once
#include "Shooter.h"

class Archer :public Shooter
{
protected:
	Archer();
	void shot();
	void exportClassInfo(std::ofstream& file);
};

