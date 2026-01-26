#include<iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int first = 0, second = 0;
    for (int i = 0; i < 4; i++) {
        first += arr[i][i];
    }
    int i = 0, j = 3;
    while (j >= 0) {
        second += arr[i][j];
        i++;
        j--;
    }
    cout << first << " " << second << endl;
    return 0;
}
