#pragma once

double CalculateMass(float F, double acceleration);

float CalculateVolume(float radius, int heightFlask);

void forceOfArchimedes();

float calculateTimeAverage(float times[], int count);

float CalculateAcceleration(float distance, float timeAverage);

float* readTimes(int count);

void secondPrincipleOfMechanicsCheck();

void slopingPlane();

void accelerationsOfPlanets();

void printMenu();
