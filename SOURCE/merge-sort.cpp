#include "head.h"

void merge(int a[], int left, int mid, int right) 
{
    int i = left;
    int j = mid + 1;
    int k = 0;
    int temp[right - left + 1];

    while (i <= mid && j <= right) {
        if(a[i] <= a[j]) {
            temp[k++] = a[i++];
        }else {
            temp[k++] = a[j++];
        }
    }
    while (i <= mid) {
        temp[k++] = a[i++];
    }
    while (j <= right) {
        temp[k++] = a[j++];
    }

    for (int idx = 0; idx < k; idx++) {
        a[left + idx] = temp[idx];
    }
}
void mergeSort(int a[], int left, int right) 
{
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

