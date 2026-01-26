#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char *argv[]) {
    vector<int> arr = {4,3,7,2};
    // Subarray's of 1 size
    cout<<"Subarray's of 1 size - ";
    cout<<endl;
    int start = 0, end = arr.size() - 1;
    while (start <= end) {
        cout<<arr[start]<<endl;
        start++;
    }
    cout<<endl;

    // Subarray's of 2 size
    cout<<"Subarray's of 2 size - ";
    start = 0, end = arr.size() - 1;
    cout<<endl;
    while (start < end) {
        cout<<arr[start]<<" "<<arr[start + 1]<<" ";
        start++;
        cout<<endl;
    }
    cout<<endl;

    // Subarray's of 3 size
    cout<<"Subarray's of 3 size - ";
    start = 0, end = arr.size() - 2;
    cout<<endl;
    while (start < end ) {
        cout<<arr[start]<<" "<<arr[start + 1]<<" "<<arr[start + 2]<<" ";
        start++;
        cout<<endl;
    }
    cout<<endl;

    // Subarray's of 4 size
    cout<<"Subarray's of 4 size - ";
    start = 0, end = arr.size() - 1;
    cout<<endl;
    while (start <= end ) {
        cout<<arr[start]<<" ";
        start++;
    }
    cout<<endl;
    return 0;
}
