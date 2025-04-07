#include "head.h"

long long countingSort(int a[], int n)
{
    long long compCount = 0;
    int count[MAX + 1] = {0};
    int output[n];
    int max = a[0];
    for (int i = 1; i < n; i++) {
      compCount++;
      if (a[i] > max)
        max = a[i];
    }
    for (int i = 0; i < n;i++) {
      count[a[i]]++;
    }
 
    for (int i = 1; i <= max; i++) {
      count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
      output[count[a[i]] - 1] = a[i];
      count[a[i]]--;
    }
 
    for (int i = 0; i < n; i++) {
      a[i] = output[i];
    }
    return compCount;
}
  