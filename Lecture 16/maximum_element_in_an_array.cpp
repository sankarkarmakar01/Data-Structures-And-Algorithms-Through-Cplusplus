#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 9, 55, 78, 33};
    int ans = INT32_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    cout << "Maximum element is: " << ans;
    return 0;
}