#include <iostream>
using namespace std;
void inc(int n)
{
    n++;
    cout << n << endl;
}
int main()
{
    int a = 10;
    inc(a);
    cout << a << endl;
    inc(a);
    return 0;
}