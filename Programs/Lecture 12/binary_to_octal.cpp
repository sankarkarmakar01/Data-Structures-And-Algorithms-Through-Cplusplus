#include <iostream>
using namespace std;
int main()
{
    long num, ans = 0, mul = 1;
    long n, a = 0, m = 1;
    int rem, r;
    cout << "Enter the binary number: ";
    cin >> num;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = ans + (rem * mul);
        mul = mul * 2;
    }
    n = ans;
    while (n != 0)
    {
        r = n % 8;
        n = n / 8;
        a += r * m;
        m *= 10;
    }
    cout << "The octal form is: " << a;
    return 0;
}