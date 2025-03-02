#include <iostream>
#include "binomial.h"
using namespace std;

int main() 
{
    int n, k;
    cout << "Enter values for n and k: ";
    cin >> n >> k;
    if (k < 0 || k > n) 
    {
        cout << "Invalid input! k should be between 0 and n.\n";
    }
    else 
    {
        cout << "Binomial Coefficient C(" << n << ", " << k << ") = " << binomialCoeff(n, k) << endl;
    }
    return 0;
}