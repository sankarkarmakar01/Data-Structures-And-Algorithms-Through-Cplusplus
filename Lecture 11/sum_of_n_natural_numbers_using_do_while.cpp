#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, result = 0;
    cout << "Enter the last number: ";
    cin >> n;
    do
    {
        result += i;
        i++;
    } while (i <= n);
    cout << "Answer is:" << result;
    return 0;
}