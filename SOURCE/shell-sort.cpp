#include "head.h"

void shellSort(int a[], int n)
{
    int k, i, j, temp;
    for (k = n / 2; k > 0; k /= 2) {
        for (i = k; i < n; i++) {
            temp = a[i];
            for (j = i; j >= k; j -= k) {
                if(a[j - k] > temp){
                    a[j] = a[j-k];
                    continue;
                }
                break;
            }
        }
    }
}