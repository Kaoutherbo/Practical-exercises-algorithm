#ifndef MAIN_H
#define MAIN_H
// Header files
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Prototypes for every function in the project
void remplirTableauAvecEntiersAliaoire(int arr[], int size, int maxValue);
void TriParSelection(int*, int);
void insertionSort(int*, int);
void displayArray(int* , int ,char*);
int getSize(char *s);
int getOption(char *s);
void printUsageSort(int *arr, int size, int option);

#endif