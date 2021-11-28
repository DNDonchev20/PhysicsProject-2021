#pragma once

float CalculateMass(float F, float acceleration);

float CalculateVolume(float radius, int heightFlask);

void forceOfArchimedes();

float calculateTimeAverage(float times[], int count);

float CalculateAcceleration(float distance, float timeAverage);

float* readTimes(int count);

void secondPrincipleOfMechanicsCheck();

void slopingPlane();

void accelerationsOfPlanets();

void printMenu();
