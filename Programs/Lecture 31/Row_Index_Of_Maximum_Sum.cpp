#include<iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int index = -1, sum = 0, ans = INT_MIN;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            sum += arr[i][j];
            if (sum > ans) {
                ans = sum;
                index = i;
            }
        }
    }
    cout << index << endl;
    return 0;
}
