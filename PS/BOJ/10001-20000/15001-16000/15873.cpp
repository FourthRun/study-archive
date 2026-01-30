#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int sum;

    cin >> s;

    if(s.size() == 2) sum = (s[0] - '0') + (s[1] - '0');
    else if(s.size() == 3) {
        if(s[0] == '0') sum = 10;
        else if(s[1] == '0') sum = 10 + (s[2] - '0');
        else sum = 10 + (s[0] - '0');
    }
    else sum = 20;

    cout << sum;

    return 0;
}