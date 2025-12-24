#include <iostream>
#include <string>

using namespace std;

int arr[10] = {0, };

int main() {
    int a, b, c;
    string s;

    cin >> a >> b >> c;

    s = to_string(a * b * c);

    //cout << s;

    for(char c : s) {
        arr[c - '0']++;
    }

    for(int i = 0; i < 10; i++) {
        cout << arr[i] << "\n";
    }

    return 0;
}