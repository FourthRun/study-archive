#include <iostream>

using namespace std;

int main() {
    int count, num, checkNum;
    int arr[110] = {};
    int checkCount = 0;

    cin >> count;

    for(int i = 0; i < count; i++) {
        cin >> num;
        arr[i] = num;
    }

    cin >> checkNum;

    for(int i = 0; i < count; i++) {
        if(arr[i] == checkNum) checkCount++;
    }

    cout << checkCount;

    return 0;
}