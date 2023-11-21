#include "Fortress.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ofstream File;
	string path = "AllInformation.txt";
	Fortress fort(4, 1, 1000, 50);
	fort.ExportToFile(File, path);
	fort.shootArcher();
	fort.shootArcher();
	fort.shootArcher();
	fort.shootRanger();
	fort.shootRanger();
	fort.shootFromACatapult();
	system("pause");
	return 0;
}