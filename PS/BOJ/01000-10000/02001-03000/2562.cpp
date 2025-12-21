#include <iostream>

using namespace std;

int arr[9];

int main() {
    int size;
    int maxIdx = 0;

    for(int i = 0; i < 9; i++) {
        int num;
        cin >> arr[i];
    }

     for(int i = 0; i < 9; i++) {
        if(arr[maxIdx] < arr[i]) maxIdx = i;
    }

    cout << arr[maxIdx] << "\n" << maxIdx + 1;

    return 0;
}