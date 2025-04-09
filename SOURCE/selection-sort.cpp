#include "head.h"

void selectionSort(int a[], int n) 
{
    int min;
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (a[j] < a[min]) min = j;
        }
        if (a[min] < a[i]) 
        {
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
}