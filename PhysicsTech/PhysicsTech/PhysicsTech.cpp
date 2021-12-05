#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <conio.h>
#include "../PhysicsTech/PhysicsTech-Functions.h"

using namespace std;

int main()
{
	system("color 1f");

	PrintLogo();

	/*make a choise what game to play*/
	printMenu();
	string choice;
	cin >> choice;

	do {
		if (choice == "1")
		{
			secondPrincipleOfMechanicsCheck();

		}
		else if (choice == "2") {
			accelerationsOfPlanets();
		}
		else if (choice == "3")
		{
			equilibriumMovementAtInclinedPlane();
		}
		else if (choice == "4")
		{
			forceOfArchimedes();
		}
		cout << endl;
		system("PAUSE");
		system("CLS");
		PrintLogo();
		printMenu();
		cin >> choice;
	} while (choice != "End");
}