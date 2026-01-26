#include <iostream>
using namespace std;
int main()
{
    long num, ans = 0, mul = 1;
    int rem;
    cout << "Enter the binary number: ";
    cin >> num;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = ans + (rem * mul);
        mul = mul * 2;
    }
    cout << "The decimal form is: " << ans;
    return 0;
}