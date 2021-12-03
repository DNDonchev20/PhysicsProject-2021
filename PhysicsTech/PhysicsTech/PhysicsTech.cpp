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
	//Team logo
	cout << "    ____  __               _              ______          __  " << endl;
	cout << "   / __ \\/ /_  __  _______(_)_________   /_  __/__  _____/ /_" << endl;
	cout << "  / /_/ / __ \\/ / / / ___/ / ___/ ___/    / / / _ \\/ ___/ __ \\" << endl;
	cout << " / ____/ / / / /_/ (__  ) / /__(__  )    / / /  __/ /__/ / / /" << endl;
	cout << "/_/   /_/ /_/\\__, /____/_/\\___/____/    /_/  \\___/\\___/_/ /_/ " << endl;
	cout << "            /____/                                            " << endl;
	cout << endl;

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
		printMenu();
		cin >> choice;
	} while (choice != "End");
}
