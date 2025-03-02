#include <iostream>
#include "prime.h"
using namespace std;

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPrime(n)) 
    {
        cout << n << " is a prime number.\n";
    }
    else 
    {
        cout << n << " is not a prime number.\n";
    }
    return 0;
}