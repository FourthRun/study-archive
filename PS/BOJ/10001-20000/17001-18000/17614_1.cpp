#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int sum = 0;
    string s;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        s = to_string(i);

        for(char c : s) {
            if(c == '3' || c == '6' || c == '9') sum++;
        }
    }

    cout << sum;

    return 0;
}