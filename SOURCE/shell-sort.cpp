#include "head.h"

void shellSort(int a[], int n)
{
    int k, i, j, temp;
    for (k = n / 2; k > 0; k /= 2) {
        for (i = k; i < n; i++) {
            temp = a[i];
            for (j = i; j >= k && a[j - k] > temp; j -= k) {
                a[j] = a[j - k];
            }
            a[j] = temp;
        }
    }
}