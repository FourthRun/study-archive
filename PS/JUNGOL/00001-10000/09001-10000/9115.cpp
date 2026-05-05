#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;

    for(char c : s) {
        if(isupper(c)) cout << (char)tolower(c);
        else if(islower(c)) cout << (char)toupper(c);
        else cout << c;
    }

    return 0;
}