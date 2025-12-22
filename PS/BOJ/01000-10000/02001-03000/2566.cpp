#include <iostream>
#include <algorithm>

using namespace std;

int arr[10][10];

int main() {
    int maxVal = -1;
    int x = 1, y = 1;

    for(int i = 1; i <= 9; i++) {
        for(int j = 1; j <= 9; j++) {
            cin >> arr[i][j];

            if(arr[i][j] > maxVal) {
                maxVal = arr[i][j];
                x = i;
                y = j;
            }
        }
    } 

    cout << maxVal << "\n" << x << " " << y;

    return 0;
}