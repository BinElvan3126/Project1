#include "head.h"

void readFromFile(const char* filename, int a[], int &n) 
{
    ifstream inFile(filename);
    if (!inFile.is_open()) {
        cout << "Can't open " << filename << endl;
        return;
    }
    
    inFile >> n;
    for (int i = 0; i < n; i++) {
        inFile >> a[i];
    } 
    inFile.close();
}

void writeToFile(const char* filename, int a[], int n) 
{
    ofstream outFile(filename);
    if (!outFile.is_open()) {
        cout << "Can't open " << filename << endl;
        return;
    }
    
    outFile << n << endl;
    for (int i = 0; i < n; i++) {
        outFile << a[i] << " ";
    }
    outFile.close();
}
