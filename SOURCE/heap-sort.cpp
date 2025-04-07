#include "head.h"

long long heapify(int a[], int n, int i) 
{
    long long tempCount = 0;
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2; 

    if (left < n && a[left] > a[largest]) {
        tempCount ++;
        largest = left;
    }
    if (right < n && a[right] > a[largest]) {
        tempCount++;
        largest = right;
    }
    if (largest != i) {
        swap(a[i], a[largest]);
        tempCount+= heapify(a, n, largest);
    }
    return tempCount;
}
long long heapSort(int a[], int n)
{
    long long count = 0;
    for (int i = n / 2 - 1; i >= 0; i--) {
        count+=heapify(a, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(a[0], a[i]);
        count+=heapify(a, i, 0);
    }
    return count;
}