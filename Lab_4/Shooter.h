#pragma once
#include <string>
#include <iostream>
#include <Windows.h>
#include <fstream>

class Shooter
{
protected:
	std::string ammunitionName;
	int* amountOfAmmunition;
	Shooter();
	void shot();
	void giveAmmunition(std::string ammunitionName, int count);
	void exportClassInfo(std::ofstream& file);
};
