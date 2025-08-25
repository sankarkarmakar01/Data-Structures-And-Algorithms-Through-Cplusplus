#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age:";
    cin >> age;
    if (age >= 18)
    {
        cout << "Voter";
    }
    else
    {
        cout << "Non Voter";
    }
    return 0;
}