// Print number from 280 to 250 with the help of for loop.

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int a, b;
    cout << "Enter the start number: ";
    cin >> a;
    cout << "Enter the last number: ";
    cin >> b;

    for (int i = a; i <= b; i++)
    {

        if (isPrime(i))
            cout << i << " ";
    }
    return 0;
}