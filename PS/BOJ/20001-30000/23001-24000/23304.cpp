#include <iostream>
#include <string>
#include <algorithm>

bool check = true;

using namespace std;

void calc(string s) {
    if(!check) return;

    if(s.size() % 2 == 0) {
        if(s.substr(0, s.size() / 2) != s.substr(s.size() / 2, s.size())) check = false;

        calc(s.substr(s.size() / 2, s.size()));
    }
    else {
        if(s.size() == 1) return;
        else if(s.substr(0, s.size() / 2) != s.substr(s.size() / 2 + 1, s.size())) check = false;

        calc(s.substr(s.size() / 2 + 1, s.size()));
    }
    
    calc(s.substr(0, s.size() / 2));
    
}

int main() {
    string origin, result;

    cin >> origin;
    
    calc(origin);

    if(check) cout << "AKARAKA";
    else cout << "IPSELENTI";

    return 0;
}