#include <iostream>
// #include <algorithm>

using namespace std;

int arr[101];

int main() {
    int basket, tryNum;

    cin >> basket >> tryNum;

    for(int i = 0; i < tryNum; i++) {
        int x, y, z;
        cin >> x >> y >> z;

         for(x -= 1; x < y; x++) {
            arr[x] = z;
        }
        // == fill(arr + x - 1, arr + y, z);
    }

    for(int i = 0; i < basket; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}