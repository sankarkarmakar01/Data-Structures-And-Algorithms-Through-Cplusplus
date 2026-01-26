#include<iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int target = 7;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == target) {
                cout << "Target is present at the index of arr["<<i<<"]["<<j<<"]";
                return 0;
            }
        }
    }
    cout<<"Target is not present in the array...";
    return 0;
}
