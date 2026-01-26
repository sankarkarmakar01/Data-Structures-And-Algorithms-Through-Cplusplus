#include <iostream>
using namespace std;

class FibonacciNumberUsingArray {
public:
    static int findFibonacci(int n) {
        if (n <= 0) return 0;
        if (n == 1) return 0;

        const auto arr = new int[n];
        arr[0] = 0;
        arr[1] = 1;

        for(int i = 2; i < n; i++) {
            arr[i] = arr[i - 1] + arr[i - 2];
        }

        int result = arr[n - 1];
        delete[] arr; // Clean up dynamically allocated memory
        return result;
    }
};

int main() {
    FibonacciNumberUsingArray fib;
    const int ans = fib.findFibonacci(6);
    cout << ans << endl;
    return 0;
}