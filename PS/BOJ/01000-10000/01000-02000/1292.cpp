#include <iostream>

using namespace std;

int arr[1050];

int main() {
    int a, b;
    int index = 1;
    int sum = 0;

    cin >> a >> b;

    for(int i = 1; i < 46; i++) {
        for(int j = 0; j < i; j++) {
            arr[index] = i;
            index++;
        }
    }

    for(int i = a; i <= b; i++) {
        sum += arr[i];
    }

    cout << sum;

    return 0;
}