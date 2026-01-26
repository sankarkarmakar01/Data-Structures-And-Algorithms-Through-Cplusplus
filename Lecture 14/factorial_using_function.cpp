#include <iostream>
using namespace std;
void factoroal(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Factorial is: " << fact;
}
int main()
{
    int n;
    cout << "Enter the n'th number:";
    cin >> n;
    factoroal(n);
    return 0;
}