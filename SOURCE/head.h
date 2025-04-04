#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <chrono>

#define MAX 100000

using namespace std;

void readFromFile(const char* filename, int a[], int &n);
void writeToFile(const char* filename, int a[], int n);

void selectionSort(int a[], int n);
void insertionSort(int a[], int n);
void bubbleSort(int a[], int n);
void shakerSort(int a[], int n);
void shellSort(int a[], int n);

void heapify(int a[], int n, int i);
void heapSort(int a[], int n);

void merge(int a[], int left, int mid, int right);
void mergeSort(int a[], int left, int right);

int partition(int a[], int low, int high);
void quickSort(int a[], int low, int high);

void countingSort(int a[], int n);



#endif 