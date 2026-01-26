#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        int result = n * i;
        cout << n << " * " << i << " = " << result << endl;
    }
    return 0;
}