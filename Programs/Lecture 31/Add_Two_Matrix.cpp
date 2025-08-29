#include<iostream>
using namespace std;

void addMatrix(int arr1[][4], int arr2[][4], int row, int col) {
    int ans[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            ans[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main(int argc, char *argv[]) {
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {5,8,9,6,4,2,10,2,2,9,15,5};
    addMatrix(arr1, arr2, 3, 4);
    return 0;
}
