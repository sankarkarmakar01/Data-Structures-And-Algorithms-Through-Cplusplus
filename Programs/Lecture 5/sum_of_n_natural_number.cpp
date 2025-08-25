#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += i;
    }
    cout << "Answer: " << ans;
    return 0;
}