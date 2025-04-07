#include "head.h"

long long shellSort(int a[], int n)
{
    long long count = 0;
    int k, i, j, temp;
    for (k = n / 2; k > 0; k /= 2) {
        for (i = k; i < n; i++) {
            temp = a[i];
            for (j = i; j >= k; j -= k) {
                count++;
                if(a[j - k] > temp){
                    a[j] = a[j-k];
                    continue;
                }
                break;
            }
        }
    }
    return count;
}