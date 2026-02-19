#include <iostream>
#include <algorithm>

using namespace std;

int arr[101];

int main() {
    int num;
    int sum = 0;
    int maxIdx = 0;

    for(int i = 0; i < 10; i++) {
        cin >> num;

        num /= 10;

        arr[num]++;

        sum += num;
    }

    for(int i = 1; i <= 100; i++) {
        if(maxIdx < arr[i]) maxIdx = i; 
    }

    cout << sum << "\n" << maxIdx * 10;

    return 0;
}