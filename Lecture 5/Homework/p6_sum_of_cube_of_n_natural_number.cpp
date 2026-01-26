// Print Sum of cube of first n natural number

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
        ans += (i * i * i);
    }
    cout << "Answer: " << ans;
    return 0;
}