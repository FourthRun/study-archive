#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, num, d;
    string s;

    while(getline(cin, s)) {
        a = 0;
        b = 0;
        num = 0;
        d = 0;

        for(char c : s) {
            if(c >= 'a' && c <= 'z') a++;
            else if(c >= 'A' && c <= 'Z') b++;
            else if(c >= '0' && c <= '9') num++;
            else if(c == ' ') d++;
        }

        cout << a << " " << b <<  " " << num << " " << d << "\n";
    }

    return 0;
}