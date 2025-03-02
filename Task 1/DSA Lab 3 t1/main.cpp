#include <iostream>
#include "recursion.h"
using namespace std;

int main() 
{
    Recursion recursion;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    recursion.printNums(n);

    return 0;
}