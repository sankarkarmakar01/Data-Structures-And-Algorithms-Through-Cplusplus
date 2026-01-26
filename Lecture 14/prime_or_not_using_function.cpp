#include <iostream>
using namespace std;
void primeOrNot(int n)
{
    if (n < 2)
        return;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            return;
        }
    }
    cout << "Prime";
}
int main()
{
    int n;
    cout << "Enter the n'th number:";
    cin >> n;
    primeOrNot(n);
    return 0;
}