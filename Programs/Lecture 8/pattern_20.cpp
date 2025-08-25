//* A B C D E
//* A B C D
//* A B C
//* A B
//* A

#include <iostream>
using namespace std;
int main()
{
    int alphabet = 65;
    for (int i = 5 - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char(alphabet + j) << " ";
        }
        cout << endl;
    }
    return 0;
}