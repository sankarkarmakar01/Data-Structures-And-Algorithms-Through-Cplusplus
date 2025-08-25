// Print n’th Fibonacci number.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the length: ";
    cin >> n;

    int a = 0, b = 1, c;
    for (int i = 1; i <= n - 2; i++)
    {
        c = a + b;
        // cout << c << " ";
        a = b;
        b = c;
    }
    cout << "N'th fibonacci number is: " << c;
    return 0;
}