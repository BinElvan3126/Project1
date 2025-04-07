#include "head.h"

long long merge(int a[], int left, int mid, int right) 
{
    long long tempCount = 0;
    int i,j,k;
    i=left, j=mid+1, k=0;
    int temp[right - left + 1];
    while (i <= mid && j <= right) {
        tempCount++;
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
    for (int i = 0; i < k; i++) {
        a[left + i] = temp[i];
    }
    return tempCount;
}
long long mergeSort(int a[], int left, int right) 
{
    long long count = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;
        count+=mergeSort(a, left, mid);
        count+=mergeSort(a, mid + 1, right);
        count+=merge(a, left, mid, right);
    }
    return count;
}

