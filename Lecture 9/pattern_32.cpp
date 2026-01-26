// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the rows:";
    cin >> n;
    for (int row = n; row >= 1; row--)
    {
        //^ print *
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        //^ print space
        for (int col = 1; col <= 2 * n - 2 * row; col++)
        {
            cout << " ";
        }
        //^ print *
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int row = 1; row <= n; row++)
    {
        //^ print *
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        //^ print space
        for (int col = 1; col <= 2 * n - 2 * row; col++)
        {
            cout << " ";
        }
        //^ print *
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}