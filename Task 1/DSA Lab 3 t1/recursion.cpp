#include <iostream>
#include "recursion.h"
using namespace std;

void Recursion::printNumbersOp(int n) 
{
    if (n < 0) {
        return;
    }
    cout << n << " ";
    printNumbersOp(n - 1);
}

void Recursion::printNums(int n) 
{
    if (n < 0) 
    {
        cout << "\nInput should be a non-negative number.";
        return;
    }
    cout << "Printing numbers from " << n << " to 0: ";
    printNumbersOp(n);
    cout << endl;
}