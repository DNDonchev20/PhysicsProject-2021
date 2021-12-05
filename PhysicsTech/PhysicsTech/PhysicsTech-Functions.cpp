#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <conio.h>
#include "../PhysicsTech/PhysicsTech-Functions.h"

using namespace std;

//Consider the volume of the collapse
float CalculateVolume(float radius, int heightFlask)
{
	return 3.14f * radius * radius * heightFlask;
}

//choose what shape the body is (only the ideal cases are taken) - cube, sphere, cylinder
float enterTheShapes(string shapeSelector, float radiusShapes, float aCube, float volumeShape, float heightCylinder)
{
	const float pi = 3.14;
	//cube, sphere, cylinder
	//menu set up
	if (shapeSelector == "1")
	{
		cout << "Enter the cube side: ";
		cin >> aCube;
		cout << endl;

		volumeShape = aCube * aCube * aCube;
		cout << "Volume of the cube is: ";

		return volumeShape;
	}
	else if (shapeSelector == "2")
	{
		cout << "Enter the radius of sphere: ";
		cin >> radiusShapes;
		cout << endl;

		volumeShape = 4 / 3 * pi * radiusShapes * radiusShapes * radiusShapes;
		cout << "Volume of the sphere is: ";

		return volumeShape;
	}
	else if (shapeSelector == "3")
	{
		cout << "Enter the radius of cylinder: ";
		cin >> radiusShapes;

		cout << "Enter the height of cylinder: ";
		cin >> heightCylinder;
		cout << endl;

		volumeShape = pi * heightCylinder * pow(radiusShapes, 2);
		cout << "Volume of the sphere is: ";

		return volumeShape;
	}

}

//Create menu for the shapes in the Archimedes task
void printMenuForShapes()
{
	cout << setfill('-') << setw(15) << " " << endl;
	cout << "1. Cube" << endl;
	cout << "2. Sphere" << endl;
	cout << "3. Cylinder" << endl;
	cout << setfill('-') << setw(15) << " " << endl;
}


void PushingPower(float  densitOfLiquids[4], float volumeShape)
{
	for (int i = 0; i < 4; i++)
	{
		switch (i)
		{
		case 0:
			cout << "The pushing power in gasoline is: ";
			break;

		case 1:
			cout << "The pushing power in alcohol is: ";
			break;

		case 2:
			cout << "The pushing power in oil is: ";
			break;

		case 3:
			cout << "The pushing power in water is: ";
			break;
		}

		float PushingPower = densitOfLiquids[i] * volumeShape * 10;
		cout << PushingPower << "N" << endl;
	}
}

void forceOfArchimedes()
{
	//V = pow(a, 3) - cube
	//V = 4 / 3 * 3.14 * pow(r, 3) - sphere
	//V = 3.14 * pow(r, 2) * h - cylinder


	//Radius of the flask = 4.5 cm and height = 14 cm(these are data of a sample flask)
	float radius = 4.5;
	int heightFlask = 14;

	float theVolumeOfTheFlask = CalculateVolume(radius, heightFlask);
	cout << "The volume of the flask is: " << theVolumeOfTheFlask << "cm3" << endl;

	//given the in poured water
	float volumeOfWater;

	float heightOfWater;

	cout << "The height of the poured water in the flask is: ";

	cin >> heightOfWater;


	volumeOfWater = 3.14f * radius * radius * heightOfWater;

	cout << "The volume of the poured water in the flask is:  " << volumeOfWater << "cm3" << endl;

	/*if (volumeOfWater > volumeOfWater)
	{

	}*/

	printMenuForShapes();

	string shapeSelector;

	cin >> shapeSelector;

	float radiusShapes = 0, aCube = 0;
	float volumeShape = 0;
	float heightCylinder = 0;

	cout << enterTheShapes(shapeSelector, radiusShapes, aCube, volumeShape, heightCylinder);
	cout << "cm3" << endl;
	cout << endl;

	float densitOfLiquids[4] = { 720, 780, 900, 1000 };//	kg/m3	
	cout << setfill('-') << setw(70) << " " << endl;;
	cout << endl;

	/*if (volumeShape + volumeOfWater > theVolumeOfTheFlask)
	{

	}*/

	PushingPower(densitOfLiquids, volumeShape);

	cout << endl;
	cout << setfill('-') << setw(70) << " " << endl;
}

//Find the average of the three times
//declarating new function for calculation
float calculateTimeAverage(float times[], int count) {
	float timeSum = 0;

	for (int i = 0; i < count; i++)
	{
		timeSum += times[i];
	}

	return timeSum / count;
}

//Find the acceleration according to the formula
//declarating new function for calculation
float CalculateAcceleration(float distance, float timeAverage)
{
	return (2 * distance) / (timeAverage * timeAverage);
}

//declarating new function for calculation
float CalculateMass(float F, float acceleration)
{
	return F / acceleration;
}

//Enter the times (which are three for accuracy)
//declarating new function for calculation
float* readTimes(int count)
{
	float* times = new float[count];

	for (int i = 0; i < count; i++)
	{
		switch (i)
		{
		case 0:
			cout << "First time: ";
			break;
		case 1:
			cout << "Second time: ";
			break;
		case 2:
			cout << "Third time: ";
			break;
		}

		cin >> times[i];
	}

	return times;
}


float mHolder, mTrolley;

void OutputUntilHolder() {
	system("CLS");
	PrintLogo();
	printMenu();
	cout << "Distance from the starting position of the trolley to the restrictive plates: ";
	cout << endl;
}

void OutputUntilTimes() {
	OutputUntilHolder();
	cout << "Total mass of the holder: ";
	cout << mHolder << endl;
	cout << "Total mass is: ";
	float AllM = mHolder + mTrolley;
	cout << AllM << endl;
	cout << "Strength of gravity is equal to the: ";
	float F = mHolder * 10;	// g = 10

	cout << F << endl;
}

//Enter the mass of the holder and troley
void EnterTheMass()
{
	cout << "Total mass of the holder: ";
	cin >> mHolder;
	cout << endl;
	while (mHolder >= 0.06) {
		OutputUntilHolder();

		cout << "The holder is too heavy to replace it with another" << endl;
		cout << "Try again" << endl;

		cin >> mHolder;
	}

	cout << "Total mass of the trolley: ";
	cin >> mTrolley;
	cout << endl;

	cout << "Total mass is: ";
	float AllM = mHolder + mTrolley;
	cout << AllM << endl;
}

//declarating new function  about the second princip of the mechanics
void secondPrincipleOfMechanicsCheck()
{
	float distance;

	cout << "Distance from the starting position of the trolley to the restrictive plates: ";
	cin >> distance;
	cout << endl;

	EnterTheMass();

	float F = 0;

	cout << "Strength of gravity is equal to the: ";
	F = mHolder * 10;	// g = 10

	cout << F << endl;

	int count = 3;
	float* times = readTimes(count);

	float timeAverage = calculateTimeAverage(times, 3);

	cout << "Average time: " << timeAverage << endl;

	//Find the acceleration according to the formula
	float acceleration = CalculateAcceleration(distance, timeAverage);
	cout << fixed << setprecision(2) << "Accleration is: " << acceleration << endl;

	float M = CalculateMass(F, acceleration);

	while (M >= 1)
	{
		system("CLS");

		PrintLogo();
		printMenu();

		cout << "It's too heavy a body. Change it to a lighter one." << endl;

		OutputUntilTimes();
		times = readTimes(count);

		float timeAverage = calculateTimeAverage(times, 3);

		cout << "Average time: " << timeAverage << endl;

		//Find the acceleration according to the formula
		float acceleration = CalculateAcceleration(distance, timeAverage);
		cout << fixed << setprecision(2) << "Accleration is: " << acceleration << endl;

		M = CalculateMass(F, acceleration);
		cout << endl;
	}

	cout << "The F/a ratio is: " << M << endl;


}

void ånterÒheÌass()
{
}

//declarating new function  about the distance between the planets
void equilibriumMovementAtInclinedPlane()
{
	float distance;

	cout << "Distance from the starting position of the trolley to the restrictive plates: ";
	cin >> distance;
	cout << endl;

	int count = 3;
	float* times = readTimes(count);


	float timeAverage = calculateTimeAverage(times, 3);

	cout << "Average time: " << timeAverage << endl;

	float  acceleration = CalculateAcceleration(distance, timeAverage);

	cout << fixed << setprecision(2) << "Accleration is: " << acceleration << endl;
}


//declarating new function  about the distance between the planets + calculation
void accelerationsOfPlanets()
{
	/*Mercury = 3.59; Venus = 8.87;
	Earth = 9.81; Mars = 3.77;
	Jupiter = 25.95; Saturn = 11.08;
	Uranus = 10.67; Neptume = 14.07*/


	float arr[9] = { 3.59, 8.77, 9.81, 3.77, 25.95, 11.08, 10.67, 14.07, 25.95 };
	float swap;

	//compare and sort the accelerations

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < (7 - i); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swap;
			}
		}
	}

	/*1. Mercury = 3.59
		2. Mars = 3.77
		3. Venus = 8.87
		4. Earth = 9.81
		5. Uranus = 10.67
		6. Saturn = 11.08
		7. Neptume = 14.07*/

	for (int i = 0; i < 8; i++)
	{
		switch (i)
		{
		case 0:
			cout << "Mercury = ";
			break;

		case 1:
			cout << "Mars = ";
			break;

		case 2:
			cout << "Venus = ";
			break;

		case 3:
			cout << "Earth = ";
			break;

		case 4:
			cout << "Uranus = ";
			break;

		case 5:
			cout << "Saturn = ";
			break;

		case 6:
			cout << "Neptume = ";
			break;

		case 7:
			cout << "Jupiter = ";

		}

		cout << arr[i] << endl;
	}

	int time;

	cout << endl;
	cout << "Time for which the body falls free is: ";
	cin >> time;
	cout << endl;

	float s;

	cout << setfill('-') << setw(70) << " " << endl;
	cout << endl;

	cout << "Text which write down is for distance(S) on different planets: " << endl;
	cout << endl;

	for (int i = 0; i < 8; i++)
	{
		switch (i)
		{
		case 0:
			cout << "Distance on Mercury for " << time << " seconds is: ";
			break;

		case 1:
			cout << "Distance on Mars for " << time << " seconds is: ";
			break;

		case 2:
			cout << "Distance on Venus for " << time << " seconds is: ";
			break;

		case 3:
			cout << "Distance on Earth for " << time << " seconds is: ";
			break;

		case 4:
			cout << "Distance on Uranus for " << time << " seconds is: ";
			break;

		case 5:
			cout << "Distance on Saturn for " << time << " seconds is: ";
			break;

		case 6:
			cout << "Distance on Neptume for " << time << " seconds is: ";
			break;

		case 7:
			cout << "Distance on Jupiter for " << time << " seconds is: ";

		}

		s = (arr[i] * time * time) / 2;
		if (s >= 1000)
		{
			s /= 1000;
			cout << fixed << setprecision(2) << s << "km" << endl;
		}
		else {
			cout << fixed << setprecision(2) << s << "m" << endl;
		}
	}

	cout << endl;
	cout << setfill('-') << setw(70) << " " << endl;
	cout << endl;

	int speed;

	cout << "Text which is write down is for speed(V) on different planets: " << endl;
	cout << endl;

	for (int i = 0; i < 8; i++)
	{
		switch (i)
		{
		case 0:
			cout << "Speed on Mercury for " << time << " seconds is: ";
			break;

		case 1:
			cout << "Speed on Mars for " << time << " seconds is: ";
			break;

		case 2:
			cout << "Speed on Venus for " << time << " seconds is: ";
			break;

		case 3:
			cout << "Speed on Earth for " << time << " seconds is: ";
			break;

		case 4:
			cout << "Speed on Uranus for " << time << " seconds is: ";
			break;

		case 5:
			cout << "Speed on Saturn for " << time << " seconds is: ";
			break;

		case 6:
			cout << "Speed on Neptume for " << time << " seconds is: ";
			break;

		case 7:
			cout << "Speed on Jupiter for " << time << " seconds is: ";

		}
		speed = arr[i] * time;
		cout << fixed << setprecision(2) << arr[i] * time << "m/s" << endl;
	}

	cout << endl;
	cout << setfill('-') << setw(70) << " " << endl;
	cout << endl;

}

//Create function for menu
void printMenu()
{
	cout << setfill('-') << setw(70) << " " << endl;
	cout << "1. Second principle of mechanics	2. Acceleration of planets" << endl;
	cout << "3. Sloping plane			4. Force of Archimedes" << endl;
	cout << setfill('-') << setw(70) << " " << endl;
}

//Team logo
void PrintLogo()
{

	cout << "    ____  __               _              ______          __  " << endl;
	cout << "   / __ \\/ /_  __  _______(_)_________   /_  __/__  _____/ /_" << endl;
	cout << "  / /_/ / __ \\/ / / / ___/ / ___/ ___/    / / / _ \\/ ___/ __ \\" << endl;
	cout << " / ____/ / / / /_/ (__  ) / /__(__  )    / / /  __/ /__/ / / /" << endl;
	cout << "/_/   /_/ /_/\\__, /____/_/\\___/____/    /_/  \\___/\\___/_/ /_/ " << endl;
	cout << "            /____/                                            " << endl;
	cout << endl;
}