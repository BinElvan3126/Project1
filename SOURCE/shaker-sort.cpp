#include "head.h"

void shakerSort(int a[], int n)
{
    int left = 0;
    int right = n - 1;
    int k = 0;
    while (left < right) {
        for (int i = left; i < right; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                k = i;
            }
        }
        right = k;
        for (int i = right; i > left; i--) {
            if (a[i] < a[i + 1]) {
                swap(a[i], a[i + 1]);
                k = i;
            }
        }
        left = k;
    }
}