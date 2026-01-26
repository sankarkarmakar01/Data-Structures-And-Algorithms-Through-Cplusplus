#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;

    // Print before reversing
    cout << "Before reversing: [";
    for(int i = 0; i < n; i++) {
        cout << arr[i];
        if(i < n - 1) cout << ", ";
    }
    cout << "]" << endl;

    // Reverse the array
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // Print after reversing
    cout << "After reversing: [";
    for(int i = 0; i < n; i++) {
        cout << arr[i];
        if(i < n - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}