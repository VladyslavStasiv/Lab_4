#pragma once
#include "Shooter.h"

class Ranger :public Shooter
{
protected:
	Ranger();
	void shot();
	void exportClassInfo(std::ofstream& file);
};

