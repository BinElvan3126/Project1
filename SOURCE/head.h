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

long long selectionSort(int a[], int n);
long long insertionSort(int a[], int n);
long long bubbleSort(int a[], int n);
long long shakerSort(int a[], int n);
long long shellSort(int a[], int n);

long long heapify(int a[], int n, int i);
long long heapSort(int a[], int n);

long long merge(int a[], int left, int mid, int right);
long long mergeSort(int a[], int left, int right);

long long quickSort(int a[], int low, int high);

long long countingSort(int a[], int n);

long long radixSort(int a[], int n);
long long flashSort(int a[], int n);



#endif 