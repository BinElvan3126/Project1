#include "head.h"

void selectionSort(int a[], int n) 
{
    int count = 0;
    auto start = std::chrono::high_resolution_clock::now();
    int min;
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            count++;
            if (a[j] < a[min]) min = j;
        }
        if (a[min] < a[i]) {
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<std::chrono::milliseconds>(end - start);
    cout << "Thoi gian thuc thi: " << duration.count() << " ms" << endl;
    cout << "So phep so sanh: " << count << endl;

}