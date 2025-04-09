#include "head.h"

void flashSort(int a[], int n){
    if(n <= 1){
        return;
    }
    int min = a[0], maxi = 0;
    for(int i = 1; i< n; i++){
        if(a[i] < min) 
        {
            min = a[i];
        }
        if(a[i] > a[maxi])
        {
            maxi = i;
        }
    }
    int max = a[maxi];
    if(max ==min){
        return ;
    }
    int m = int(0.43*n);
    if(m<1){
        m = 1;
    }
    if(m>300){
        m = 300;
    }
    int* L = new int[m+1];
    for(int i = 0; i<=m; i++){
        L[i] = 0;
    }
    int c = (int)(m-1)/(max-min);
    for(int i = 0;i<n; i++) {
        int k = int(c*(a[i]-min));
        if(k<0){
            k=0;
        }
        if(k>=m){
            k=m-1;
        }
        L[k]++;
    }
    for(int i = 1;i<m;i++){
        L[i]+= L[i-1];
    }
    swap(a[0],a[maxi]);
    int moves, j,k;
    moves=0, j=0, k=m-1;
    while(moves < n - 1){
        while(j>L[k]-1){
            j++;
            k = int(c*(a[j]-min));
            if(k<0){
                k=0;
            }
            if(k>=m){
                k = m - 1;
            }
        }
        int flash = a[j];
        while(j != L[k]){
            k = int(c*(flash - min));
            if(k < 0){
                k = 0;
            }
            if(k >= m){
                k =m - 1;
            }
            int temp=a[L[k]-1];
            a[L[k]-1] = flash;
            flash = temp;
            L[k]--;
            moves++;
        }
    }
    for(int i = 1; i < n; i++){
        int key = a[i];
        int j = i - 1;
        while(j>= 0&& a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    delete[] L;
    return;
}
