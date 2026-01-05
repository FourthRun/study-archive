#include <iostream>

using namespace std;

int arr[6];

int main() {
    int count = 0;

    for(int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < 3; i++) {
        if(arr[i] < arr[i + 3]) count += arr[i + 3] - arr[i];
    }

    cout << count;

    return 0;
}