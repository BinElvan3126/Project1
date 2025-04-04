#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <chrono>

using namespace std;

void readFromFile(const char* filename, int a[], int &n);
void writeToFile(const char* filename, int a[], int n);

void selectionSort(int a[], int n);
void insertionSort(int a[], int n);
void bubbleSort(int a[], int n);
void shakerSort(int a[], int n);

#endif 