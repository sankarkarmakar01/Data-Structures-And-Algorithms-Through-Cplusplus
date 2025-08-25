#include <iostream>
using namespace std;
void convert(char ch)
{
    char ans = ch - 'a' + 'A';
    cout << ans;
}
int main()
{
    char ch;
    cout << "Enter the lowercase charecter: ";
    cin >> ch;
    convert(ch);
    return 0;
}