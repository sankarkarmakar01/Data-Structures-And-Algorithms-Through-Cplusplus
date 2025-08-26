#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {3,4,-2,5,8,20,-10,8};
    int total_sum = 0, prefix_sum = 0, index = -1;
    for (int x : arr) total_sum += x;
    int target = total_sum / 2;
    for (int i = 0; i < arr.size(); i++) {
        prefix_sum += arr[i];
        if (prefix_sum == target) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "No valid split found." << endl;
        return 0;
    }
    cout << "First array is: ";
    for (int i = 0; i <= index; i++) cout << arr[i] << " ";
    cout << endl;
    cout << "Second array is: ";
    for (int i = index + 1; i < arr.size(); i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}

