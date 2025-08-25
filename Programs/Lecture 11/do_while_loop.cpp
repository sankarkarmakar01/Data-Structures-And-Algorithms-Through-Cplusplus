#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter the last number: ";
    cin >> n;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= n);
    return 0;
}