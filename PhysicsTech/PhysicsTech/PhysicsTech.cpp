#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>

using namespace std;

void secondPrincipleOfMechanicsCheck()
{

	float distance;
	cout << "Òhe distance from the starting position of the trolley to the restrictive plates: ";
	cin >> distance;
	cout << endl;


	float mHolder, mTrolley;
	cout << "The total mass of the holder: ";
	cin >> mHolder;
	cout << endl;

	cout << "The total mass of the trolley: ";
	cin >> mTrolley;
	cout << endl;

	cout << "The total mass is: ";
	float AllM = mHolder + mTrolley;
	cout << AllM << endl;

	cout << "Òhe strength of gravity is equal to the: ";
	float F = mHolder * 10; // g = 10
	cout << F << endl;

	float times[10];

	//Measure three times for accuracy
	cout << "First time: ";
	cin >> times[0];

	cout << "Second time: ";
	cin >> times[1];

	cout << "Third time: ";
	cin >> times[2];
	cout << endl;

	//Find the average aretmic of the times (which are 3)
	float timeAv = 0;
	for (int i = 0; i < 3; i++)
	{

		timeAv += times[i];
	}
	cout << "All time is: " << timeAv << endl;

	timeAv = timeAv / 3;

	cout << "Average time: " << timeAv << endl;

	//Find the acceleration according to the formula
	float  acceleration = (2 * distance) / pow(timeAv, 2);
	cout << fixed << setprecision(2) << "Accleration is: " << acceleration;


	float M = F / acceleration;
	cout << M;
}

void slopingPlane()
{
	float distance;

	cout << "Òhe distance from the starting position of the trolley to the restrictive plates: ";

	cin >> distance;

	cout << endl;


	float times[10];
	//Measure three times for accuracy
	cout << "First time: ";
	cin >> times[0];

	cout << "Second time: ";
	cin >> times[1];

	cout << "Third time: ";
	cin >> times[2];
	cout << endl;

	//Find the average aretmic of the times (which are 3)
	float timeAv = 0;
	for (int i = 0; i < 3; i++)
	{

		timeAv += times[i];
	}

	cout << "All time is: " << timeAv << endl;

	timeAv = timeAv / 3;

	cout << "Average time: " << timeAv << endl;


	float  acceleration = (2 * distance) / pow(timeAv, 2);

	cout << fixed << setprecision(2) << "Accleration is: " << acceleration;
}

void accelerationsOfPlanets()
{
	/*Mercury = 3.59; Venus = 8.87;
	Earth = 9.81; Mars = 3.77;
	Jupiter = 25.95; Saturn = 11.08;
	Uranus = 10.67; Neptume = 14.07*/


	float arr[8] = { 3.59, 8.77, 9.81, 3.77, 25.95, 11.08, 10.67, 14.07 };
	int swap;

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
	double s;

	for (int i = 0; i < 8; i++)
	{
		s = (arr[i] * pow(time, 2)) / 2;
		if (s >= 100)
		{
			s /= 100;
			cout << "S = " << fixed << setprecision(2) << s << "êm" << endl;
		}
		else {
			cout << "S = " << fixed << setprecision(2) << s << "m" << endl;
		}
	}
}

int main()
{
	/*make a choise what game to play*/
	string choise;
	cin >> choise;

	if (choise == "1")
	{
		secondPrincipleOfMechanicsCheck();
	}
	else if (choise == "2") {
		accelerationsOfPlanets();
	}
	else if (choise == "3")
	{
		slopingPlane();
	}
	/*else if ()
	{

	}*/
}