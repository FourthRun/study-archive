#include <iostream>

using namespace std;

int arr[10005];

int main() {
    int size, num, checkNum;

    cin >> size >> checkNum;

    for(int i = 0; i < size; i++) {
        cin >> num;
        arr[i] = num;
    }

    for(int i = 0; i < size; i++) {
        if(arr[i] < checkNum) cout << arr[i] << " ";
    }

    return 0;
}