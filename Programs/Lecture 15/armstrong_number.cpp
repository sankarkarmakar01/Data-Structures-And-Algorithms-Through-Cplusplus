#include <iostream>
#include <cmath>
using namespace std;
void armstrong(int n)
{
    int rem, temp, num, count = 0, ans = 0;
    num = temp = n;
    while (n != 0)
    {
        rem = n % 10;
        count++;
        n /= 10;
    }
    while (num != 0)
    {
        rem = num % 10;
        ans = ans + pow(rem, count);
        num /= 10;
    }
    if (temp == ans)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not Armstrong Number";
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    armstrong(n);
    return 0;
}