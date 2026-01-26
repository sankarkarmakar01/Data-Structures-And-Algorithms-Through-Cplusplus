#include<iostream>
using namespace std;

void reverseMatrix(int arr[][4], const int row, const int col) {
    for (int i = 0; i < row; i++) {
        int start = 0;
        int end = col - 1;
        while (start < end) {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}
void printMatrix(int arr[][4], const int row, const int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main(int argc, char *argv[]) {
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout<<"Before Reverse Matrix: "<<endl;
    printMatrix(arr, 4, 4);
    reverseMatrix(arr, 4, 4);
    cout<<"After Reverse Matrix: "<<endl;
    printMatrix(arr, 4, 4);
    return 0;
}
