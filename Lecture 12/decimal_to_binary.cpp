#include <iostream>
using namespace std;
int main()
{
    long num, ans = 0, mul = 1;
    int rem;
    cout << "Enter the decimal number: ";
    cin >> num;
    while (num != 0)
    {
        rem = num % 2;
        num = num / 2;
        ans = ans + (rem * mul);
        mul = mul * 10;
    }
    cout << "The Binary form is: " << ans;
    return 0;
}