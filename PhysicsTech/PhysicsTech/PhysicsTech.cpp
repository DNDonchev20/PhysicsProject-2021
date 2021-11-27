#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <conio.h>
#include "PhysicsTech.h"

using namespace std;


float CalculateVolume(float radius, int heightFlask)
{
	return 3.14f * radius * radius * heightFlask;
}

void forceOfArchimedes()
{
	//V = pow(a, 3) - cube
	//V = 4 / 3 * 3.14 * pow(r, 3) - sphere
	//V = 3.14 * pow(r, 2) * h - cylinder
	//Тhe radius of the flask = 4.5 cm and height = 14 cm(these are data of a sample flask)
	float radius = 4.5;
	int heightFlask = 14;

	float theVolumeОfТheFlask = CalculateVolume(radius, heightFlask);
	cout << "The volume of the flask is: " << theVolumeОfТheFlask << "cm3" << endl;
	
	//given the in poured water
	float volumeOfWater;

	float heightOfWater;

	cout << "The height of the poured water in the flask is: ";
	cin >> heightOfWater;
	

	volumeOfWater = 3.14f * radius * radius * heightOfWater;
	cout << "The volume of the poured water in the flask is:  " << volumeOfWater << "cm3" << endl;

}

float calculateTimeAverage(float times[], int count) {
	float timeSum = 0;
	for (int i = 0; i < count; i++)
	{
		timeSum += times[i];
	}

	return timeSum / count;
}

float CalculateAcceleration(float distance, float timeAverage) {
	return (2 * distance) / (timeAverage * timeAverage);
}

float CalculateMass(float F, float acceleration)
{
	return F / acceleration;
}

float* readTimes(int count) {
	float* times = new float[count];
	for (int i = 0; i < count; i++)
	{
		cout << "Times " << i + 1 << ": ";
		cin >> times[i];
	}

	return times;
}

void secondPrincipleOfMechanicsCheck()
{

	float distance;
	cout << "Distance from the starting position of the trolley to the restrictive plates: ";
	cin >> distance;
	cout << endl;


	float mHolder, mTrolley;
	cout << "Total mass of the holder: ";
	cin >> mHolder;
	cout << endl;

	cout << "Total mass of the trolley: ";
	cin >> mTrolley;
	cout << endl;

	cout << "Total mass is: ";
	float AllM = mHolder + mTrolley;
	cout << AllM << endl;

	cout << "Strength of gravity is equal to the: ";
	float F = mHolder * 10; // g = 10
	cout << F << endl;

	int count = 3;
	float* times = readTimes(count);

	float timeAverage = calculateTimeAverage(times, 3);
	cout << "Average time: " << timeAverage << endl;

	//Find the acceleration according to the formula
	float acceleration = CalculateAcceleration(distance, timeAverage);
	cout << fixed << setprecision(2) << "Accleration is: " << acceleration << endl;

	float M = CalculateMass(F, acceleration);
	cout << M;
}

void slopingPlane()
{
	float distance;

	cout << "Distance from the starting position of the trolley to the restrictive plates: ";

	cin >> distance;

	cout << endl;


	int count = 3;
	float* times = readTimes(count);

	//Find the average aretmic of the times (which are 3)
	float timeAverage = calculateTimeAverage(times, 3);

	cout << "Average time: " << timeAverage << endl;

	float  acceleration = CalculateAcceleration(distance, timeAverage);

	cout << fixed << setprecision(2) << "Accleration is: " << acceleration;
}

void accelerationsOfPlanets()
{
	/*Mercury = 3.59; Venus = 8.87;
	Earth = 9.81; Mars = 3.77;
	Jupiter = 25.95; Saturn = 11.08;
	Uranus = 10.67; Neptume = 14.07*/


	float arr[8] = {3.59f, 8.77f, 9.81f, 3.77f, 25.95f, 11.08f, 10.67f, 14.07f};
	float swap;

	//compare and sort the accelerations//

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

void printMenu() {
	cout << setfill('-') << setw(30) << " " << endl;
	cout << "1. Second principle of mechanics" << endl;
	cout << "2. Acceleration of planets" << endl;
	cout << "3. Sloping plane" << endl;
	cout << "4. Force of Archimedes" << endl;
	cout << setfill('-') << setw(30) << " " << endl;

}

int main()
{
	system("color 1f");
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
			slopingPlane();
		}
		else if (choice == "4")
		{
			forceOfArchimedes();
		}
		system("PAUSE"); //караме потребителя да натисне бутон, за да продължи нататък
		system("CLS"); //изчистваме всичко по екрана до момента
		printMenu();
		cin >> choice;
	} while (choice != "End");
}