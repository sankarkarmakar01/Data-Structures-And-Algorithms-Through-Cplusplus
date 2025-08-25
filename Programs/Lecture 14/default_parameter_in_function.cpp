#include <iostream>
using namespace std;
void defaultParameter(int a = 12, int b = 10) // default parameter
{
    cout << a << " " << b << endl;
}
int main()
{
    defaultParameter(5, 9);
    defaultParameter(15);
    defaultParameter();
    return 0;
}