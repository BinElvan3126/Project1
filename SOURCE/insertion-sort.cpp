#include "head.h"

long long insertionSort(int a[], int n)  
{  
    long long count = 0;
    for (int i = 1; i < n; i++) 
    {  
        int key = a[i];  
        int j = i - 1;  
        while (j >= 0 && (count++, a[j] > key))
        {  
            a[j + 1] = a[j];  
            j = j - 1;  
        }  
        a[j + 1] = key;  
    }  
    return count;
}  