#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int arr[101];

int main() {
    int basket, count, num1, num2;
    iota(arr + 1, arr + 101, 1);

    cin >> basket >> count;

    for(int i = 0; i < count; i++) {
        cin >> num1 >> num2;
        reverse(arr + num1, arr + num2 + 1);
    }

    for(int i = 1; i <= basket; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}