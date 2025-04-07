#include "head.h"

long long quickSort(int a[], int left, int right) {
    long long count = 0;
    int i = left, j = right;
    if(left>=right){
        return 0;
    }
    int pivot = a[left + rand()%(right - left+1)];
    while (i <= j){
        while(++count &&a[i] < pivot){
            i++;
        }
        while(++count &&a[j] > pivot){
            j--;
        }
        if(i <= j){
            swap(a[i], a[j]);
            ++i;
            --j;
        }
    }
    if(left < j){
        count+=quickSort(a, left, j);
    }
    if(i < right){
        count+=quickSort(a, i, right);
    }
    return count;
}