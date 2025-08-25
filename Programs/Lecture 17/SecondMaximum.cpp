#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

class SecondMaximum {
public:
    static int secondMax(const int arr[], int n) {
        if (n < 2) return -1; // Handle case with less than 2 elements

        int first = INT_MIN;
        int second = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (arr[i] > first) {
                second = first;
                first = arr[i];
            } else if (arr[i] > second && arr[i] != first) {
                second = arr[i];
            }
        }

        // If all elements are same or second wasn't found
        if (second == INT_MIN) {
            return -1;
        }

        return second;
    }
};

int main() {
    int arr[] = {10, 10, 10, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    SecondMaximum obj;
    int ans = obj.secondMax(arr, n);
    cout << ans << endl;

    return 0;
}