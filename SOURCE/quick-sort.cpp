#include "head.h"

void quickSort(int a[], int left, int right) {
    int i = left, j = right;
    if(left>=right){
        return;
    }
    int pivot = a[left + rand()%(right - left+1)];
    while (i <= j){
        while(a[i] < pivot){
            i++;
        }
        while(a[j] > pivot){
            j--;
        }
        if(i <= j){
            swap(a[i], a[j]);
            ++i;
            --j;
        }
    }
    if(left < j){
        quickSort(a, left, j);
    }
    if(i < right){
        quickSort(a, i, right);
    }
}