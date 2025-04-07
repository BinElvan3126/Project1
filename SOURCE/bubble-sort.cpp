#include "head.h"

long long bubbleSort(int a[], int n){
    long long count = 0;
    for(int i = 0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
            count++;
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
    return count;
}