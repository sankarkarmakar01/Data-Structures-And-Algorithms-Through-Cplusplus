#include <iostream>
using namespace std;
void fun()
{
    cout << "I am blank" << endl;
}
void fun(int a)
{
    cout << a << endl;
}
void fun(int a, int b)
{
    cout << a << " " << b << endl;
}
int main()
{
    fun();
    fun(10);
    fun(5, 6);
    return 0;
}