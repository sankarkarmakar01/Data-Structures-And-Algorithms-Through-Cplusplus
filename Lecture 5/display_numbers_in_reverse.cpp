#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the last number: ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        cout << i << " ";
    }
    return 0;
}