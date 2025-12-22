#include <iostream>
#include <string>

using namespace std;

int arr[26] = {
    3, 3, 3,
    4, 4, 4,
    5, 5, 5,
    6, 6, 6,
    7, 7, 7,
    8, 8, 8, 8,
    9, 9, 9,
    10, 10, 10, 10
};

int main() {
    string s;
    int sum = 0;

    cin >> s;

    for(char c: s) {
        sum += arr[c - 'A'];
    }

    cout << sum;
}