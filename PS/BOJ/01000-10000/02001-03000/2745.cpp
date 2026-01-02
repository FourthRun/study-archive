#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int base, digit;
    long long sum = 0;;

    cin >> s >> base;
    
    for(char c : s) {
        if(c >= '0' && c <= '9') digit = c - '0';
        else digit = c - 'A' + 10;

        sum = sum * base + digit;
    }

    cout << sum;

    return 0;
}