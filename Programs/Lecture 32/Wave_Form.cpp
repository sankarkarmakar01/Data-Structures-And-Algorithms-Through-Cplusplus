#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
    const vector< vector<int> > matrix = {
        {3,6,4,2},
        {7,8,11,5},
        {9,3,2,1},
        {17,8,5,9}
    };
    for (int j = 0; j <matrix[0].size();j++) {
        if (j % 2 == 0) {
            for (int i = 0; i< matrix.size(); i++) {
                cout << matrix[i][j] << " ";
            }
        }
        else {
            for (int i = matrix.size() - 1; i >= 0; i--) {
                cout << matrix[i][j] << " ";
            }
        }
    }
    return 0;
}
