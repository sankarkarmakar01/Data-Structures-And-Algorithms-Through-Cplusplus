#include <iostream>
using namespace std;

int main()
{
    long num, ans = 0, mul = 1;
    cout << "Enter the octal number: ";
    cin >> num;
    while (num != 0)
    {
        int rem = num % 10;
        num = num / 10;
        ans = ans + (rem * mul);
        mul = mul * 8;
    }
    long binary = 0, place = 1;
    long decimal = ans;

    while (decimal != 0)
    {
        int rem = decimal % 2;
        decimal = decimal / 2;
        binary = binary + (rem * place);
        place = place * 10;
    }
    cout << "The binary form is: " << binary << endl;
    return 0;
}