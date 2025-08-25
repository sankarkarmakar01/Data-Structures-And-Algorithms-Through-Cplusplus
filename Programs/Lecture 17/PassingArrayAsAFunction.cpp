#include <iostream>
using namespace std;

class PassingArrayAsAFunction {
public:
    void fun(int arr[], int size) {
        for(int i = 0; i < size; i++) {
          cout << i << " => " << arr[i] << endl;
        }
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    PassingArrayAsAFunction obj;
    obj.fun(arr, size);

    return 0;
}