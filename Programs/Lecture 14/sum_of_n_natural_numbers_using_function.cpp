#include <iostream>
using namespace std;
void sumOfN(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += i;
    }
    cout << "Sum of numbers is: " << ans;
}
int main()
{
    int n;
    cout << "Enter the n'th number:";
    cin >> n;
    sumOfN(n);
    return 0;
}