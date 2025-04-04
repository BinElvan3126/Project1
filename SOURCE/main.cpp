// Project 1 UPD 12:07

// g++ main.cpp file.cpp bubble-sort.cpp insertion-sort.cpp selection-sort.cpp merge-sort.cpp quick-sort.cpp heap-sort.cpp shell-sort.cpp shaker-sort.cpp counting-sort.cpp radix-sort.cpp flash-sort.cpp -o main.exe

// main.exe -a selection-sort -i input.txt -o output.txt

#include "head.h"

int main(int argc, char* argv[]) 
{
    auto start = std::chrono::high_resolution_clock::now();
    const char* input = "input.txt";
    const char* output = "output.txt";
    char* arg;
    const int MAX_SIZE = 100000;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-a") == 0 && i + 1 < argc) {
            arg = argv[++i];
        }
        else if (strcmp(argv[i], "-i") == 0 && i + 1 < argc) {
            input = argv[++i];
        }
        else if (strcmp(argv[i], "-o") == 0 && i + 1 < argc) {
            output = argv[++i];
        }
    }

    if (arg == nullptr) {
        cout << "Not found algorithm";
        return 1;
    }

    int a[MAX_SIZE];
    int n = 0;

    readFromFile(input, a, n);

    if (strcmp(arg, "selection-sort") == 0) {
        selectionSort(a, n);
    }
    else if (strcmp(arg, "insertion-sort") == 0) {
        insertionSort(a, n);
    }
    else if (strcmp(arg, "bubble-sort") == 0) {
        bubbleSort(a, n);
    }
    else if (strcmp(arg, "shaker-sort") == 0) {
        shakerSort(a, n);
    }
    else if (strcmp(arg, "shell-sort") == 0) {
        shellSort(a, n);
    }
    else if (strcmp(arg, "heap-sort") == 0) {
        heapSort(a, n);
    }
    else if (strcmp(arg, "merge-sort") == 0) {
        mergeSort(a, 0, n - 1);
    }
    else if (strcmp(arg, "quick-sort") == 0) {
        quickSort(a, 0, n - 1);
    }
    else if (strcmp(arg, "counting-sort") == 0) {
        countingSort(a, n);
    }
    else if (strcmp(arg, "radix-sort") == 0) {
        // radixSort
    }
    else if (strcmp(arg, "flash-sort") == 0) {
        // flashSort
    }
    else {
        cout << "Not found algorithm";
        return 1;
    }
    
    writeToFile(output, a, n);
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<std::chrono::milliseconds>(end - start);
    cout << "Thoi gian thuc thi: " << duration.count() << " ms" << endl;
    return 0;
}