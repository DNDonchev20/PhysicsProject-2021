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
		cout << "Enter the radius of sphere";
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


void forceOfArchimedes()
{
	//V = pow(a, 3) - cube
	//V = 4 / 3 * 3.14 * pow(r, 3) - sphere
	//V = 3.14 * pow(r, 2) * h - cylinder


	//Radius of the flask = 4.5 cm and height = 14 cm(these are data of a sample flask)
	float radius = 4.5;
	int heightFlask = 14;

	float theVolumeŒf“heFlask = CalculateVolume(radius, heightFlask);
	cout << "The volume of the flask is: " << theVolumeŒf“heFlask << "cm3" << endl;

	//given the in poured water
	float volumeOfWater;

	float heightOfWater;

	cout << "The height of the poured water in the flask is: ";

	cin >> heightOfWater;


	volumeOfWater = 3.14f * radius * radius * heightOfWater;

	cout << "The volume of the poured water in the flask is:  " << volumeOfWater << "cm3" << endl;

	printMenuForShapes();

	string shapeSelector;

	cin >> shapeSelector;

	float radiusShapes = 0, aCube = 0;
	float volumeShape = 0;
	float heightCylinder = 0;

	cout << enterTheShapes(shapeSelector, radiusShapes, aCube, volumeShape, heightCylinder);

	
	/*float densitŒfLiquids;

	make if else for different liquids

	float Fa = densitŒfLiquids * volumeShape * 10;
	cout << Fa;*/

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

//≈nter the times (which are three for accuracy)
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

//Enter the mass of the holder and troley
void Ânter“heÃass()
{
	cout << "Total mass of the holder: ";
	cin >> mHolder;
	cout << endl;

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

	Ânter“heÃass();

	float F = 0;
	
	while (mHolder >= 0.07)
	{
		system("CLS");

		PrintLogo();
		printMenu();

		cout << endl;
		cout << "Distance from the starting position of the trolley to the restrictive plates: " << distance << endl;
		cout << endl;

		cout << "The holder is too heavy to replace it with another" << endl;
		cout << "Try again" << endl;

		Ânter“heÃass();
	} 

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

		secondPrincipleOfMechanicsCheck();
		cout << endl;
	}

	cout << "The F/a ratio is: " << M << endl;


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


	float arr[] = { 3.59, 8.77, 9.81, 3.77, 25.95, 11.08, 10.67, 14.07 };
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
		cout << i + 1 << ". " << arr[i] << endl;
	}

	int time;
	cin >> time;
	for (int i = 0; i < 8; i++)
	{
		cout << "V = " << arr[i] * time << "m/s" << endl;
	}

	cout << endl;
	float s;

	for (int i = 0; i < 8; i++)
	{
		s = (arr[i] * time * time) / 2;
		if (s >= 100)
		{
			s /= 100;
			cout << "S = " << fixed << setprecision(2) << s << "km" << endl;
		}
		else {
			cout << "S = " << fixed << setprecision(2) << s << "m" << endl;
		}
	}
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

