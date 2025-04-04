#include "function.h"

int main(int argc, char* argv[]) 
{
    const char* input = "input.txt";
    const char* output = "output.txt";
    char* arg;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-a") == 0 && i + 1 < argc) {
            arg = argv[i++];
        }
        else if (strcmp(argv[i], "-i") == 0 && i + 1 < argc) {
            input = argv[i++];
        }
        else if (strcmp(argv[i], "-o") == 0 && i + 1 < argc) {
            output = argv[i++];
        }
    }

    if (arg == nullptr) {
        cout << "Not found algorithm";
        return 1;
    }

    int a[100000];
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
    else {
        cout << "Not found algorithm";
        return 1;
    }

    writeToFile(output, a, n);
    return 0;
}