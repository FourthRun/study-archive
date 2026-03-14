#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s, check;

    while(getline(cin, s)) {
        check = "";

        if(s == "EOI") break;
        
        for(char c : s) {
            check += toupper(c);
        }

        if(check.find("NEMO") != string::npos) cout << "Found\n";
        else cout << "Missing\n";
    }

    return 0;
}