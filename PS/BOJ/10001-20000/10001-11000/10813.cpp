#include <iostream>
// #include <algorithm>
// #include <numeric>

using namespace std;

int arr[100];

int main() {
    int basket, changeNum, num1, num2, temp;

    cin >> basket >> changeNum;

    for(int i = 0; i < basket; i++) {
        arr[i] = i + 1;
    }
    // == iota(arr, arr + basket, 1);

    for(int i = 0; i < changeNum; i++) {
        cin >> num1 >> num2;
        temp = arr[num1 - 1];
        arr[num1 - 1] = arr[num2 - 1];
        arr[num2 - 1] = temp;
    }
    // == swap(arr[num1 - 1], arr[num2 - 1]);

    for(int i = 0; i < basket; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}