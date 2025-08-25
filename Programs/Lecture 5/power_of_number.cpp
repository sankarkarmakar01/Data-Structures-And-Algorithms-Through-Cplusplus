#include <iostream>
using namespace std;
int main()
{
    int num, power;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the power: ";
    cin >> power;
    int ans = 1;
    for (int i = 1; i <= power; i++)
    {
        ans = ans * num;
    }
    cout << "Answer: " << ans;
    return 0;
}