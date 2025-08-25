//*     A
//*    BB
//*   CCC
//*  DDDD
//* EEEEE

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }
        char ch = 'A' + (i - 1);
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}