#include<iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int arr[3][3];
    cout<<"Enter the array elements: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
    }
    return 0;
}
