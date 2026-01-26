#include<iostream>
#include<vector>
using namespace std;
#define MAX 100

int main(int argc, char *argv[]) {
    int arr[MAX];
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    cout<<"The prefix sum array is: ";
    for (int i = 0; i < n; i++) {
        cout<<prefix[i]<<" ";
    }
    return 0;
}
