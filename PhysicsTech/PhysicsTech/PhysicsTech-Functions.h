#pragma once

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <conio.h>

using namespace std;

float calculateVolume(float radius, int heightFlask);

float* readTimes();

void printMenu();

float enterTheShapes(string shapeSelector, float radiusShapes, float aCube, float volumeShape, float heightCylinder);

float calculateTimeAverage(float times[]);

float calculateAcceleration(float distance, float timeAverage);

float calculateMass(float F, float acceleration);

void accelerationsOfPlanets();

void equilibriumMovementAtInclinedPlane();

void secondPrincipleOfMechanicsCheck();

void forceOfArchimedes();

void printMenuForShapes();

void PrintLogo();