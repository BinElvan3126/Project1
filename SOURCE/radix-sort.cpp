#include "head.h"

void countingSort_radix(int a[], int exp, long long &EleCount, int n){
    int *ans = new int[n];
    int count[10] = {0};
    for(int i = 0;i<n;i++){
        EleCount++;
        count[(a[i]/exp)%10]++;
    }
    for(int i = 1;i<10;i++){
        count[i]+=count[i-1];
    }
    for(int i =n-1;i>=0;i--){
        EleCount++;
        int digit = (a[i]/exp)%10;
        ans[count[digit]-1] = a[i];
        count[digit]--;
    }
    for(int i = 0;i<n;i++){
        a[i] = ans[i];
    }
    delete []ans;
}

long long radixSort(int a[], int n){
    long long count = 0;
    long long maxNum = a[0];
    for(int i = 1;i<n;i++){
        if(a[i]>maxNum){
            maxNum = a[i];
        }
    }
    for(int exp = 1; maxNum/exp >0; exp *=10){
        countingSort_radix(a,exp,count,n);
    }
    return count;
}