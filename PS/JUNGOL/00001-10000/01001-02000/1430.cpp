#include <iostream>
#include <string>

using namespace std;

int arr[10];

int main() {
    long long a, b, c, res;
    string s;

    cin >> a >> b >> c;

    res = a * b * c;

    s = to_string(res);

    for(char c : s) {
        ++arr[c - '0'];
    }

    for(int i = 0; i <= 9; ++i) {
        cout << arr[i] << "\n";
    }

    return 0;
}