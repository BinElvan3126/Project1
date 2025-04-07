#include "head.h"

long long shakerSort(int a[], int n)
{
    long long count = 0;
    int left = 0;
    int right = n - 1;
    int k = 0;
    while (left < right) {
        for (int i = left; i < right; i++) {
            count++;
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                k = i;
            }
        }
        right = k;
        for (int i = right; i > left; i--) {
            count++;
            if (a[i] < a[i + 1]) {
                swap(a[i], a[i + 1]);
                k = i;
            }
        }
        left = k;
    }
    return count;
}