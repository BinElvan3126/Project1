#include "head.h"

long long flashSort(int arr[], int n) {
    long long count = 0;
    
    if (n <= 1) 
    {
        count++;
        return count;
    }
    
    int minVal = arr[0], maxIdx = 0;
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < minVal) 
        {
            minVal = arr[i];
            count++;
        }
        if (arr[i] > arr[maxIdx])
        {
            maxIdx = i;
            count++;
        }
    }
    int maxVal = arr[maxIdx];

    if (maxVal == minVal)
    {
        count++;
        return count;
    }

    int m = int(0.43 * n);
    if (m < 1) m = 1;
    if (m > 300) m = 300;

    int* L = new int[m + 1];
    for (int i = 0; i <= m; i++) L[i] = 0;

    int c = (int)(m - 1) / (maxVal - minVal);
    for (int i = 0; i < n; i++) 
    {
        int k = int(c * (arr[i] - minVal));
        if (k < 0) 
        {
            k = 0;
            count++;
        }
        if (k >= m) 
        {
            k = m - 1;
            count++;
        }
        L[k]++;
    }

    for (int i = 1; i < m; i++) 
    {
        L[i] += L[i - 1];
    }

    swap(arr[0], arr[maxIdx]);
    int moves = 0;
    int j = 0;
    int k = m - 1;

    while (moves < n - 1) 
    {
        while (j > L[k] - 1) 
        {
            j++;
            k = int(c * (arr[j] - minVal));

            if (k < 0) 
            {
                k = 0;
                count++;
            }
            if (k >= m) 
            {
                k = m - 1;
                count++;
            }
        }
        
        int flash = arr[j];
        while (j != L[k]) 
        {
            k = int(c * (flash - minVal));
  
            if (k < 0) 
            {
                k = 0;
                count++;
            }
            if (k >= m) 
            {
                k = m - 1;
                count++;
            }
            int temp = arr[L[k] - 1];
            arr[L[k] - 1] = flash;
            flash = temp;
            L[k]--;
            moves++;
        }
    }

    delete[] L;

    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
            count++;
        }
        arr[j + 1] = key;
    }
    return count;
}
