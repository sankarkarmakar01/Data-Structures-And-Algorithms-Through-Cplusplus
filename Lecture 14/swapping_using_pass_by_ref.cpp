#include <iostream>
using namespace std;
void swapPassByRef(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After:-" << endl;
    cout << a << " " << b << endl;
}
int main()
{
    int a, b;
    cout << "Enter the first number:";
    cin >> a;
    cout << "Enter the second number:";
    cin >> b;
    cout << "Before:-" << endl;
    cout << a << " " << b << endl;
    swapPassByRef(a, b);
    return 0;
}