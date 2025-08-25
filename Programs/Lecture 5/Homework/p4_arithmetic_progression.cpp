// There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.

#include <iostream>
using namespace std;
int main()
{
    int first_term = 220;
    int common_difference = 7;
    int upper_limit = 730;

    cout << "Arithmetic Progression from " << first_term
         << " to " << upper_limit << " with common difference "
         << common_difference << ":\n";

    for (int term = first_term; term <= upper_limit; term += common_difference)
    {
        cout << term << " ";
    }

    cout << endl;
    return 0;
}