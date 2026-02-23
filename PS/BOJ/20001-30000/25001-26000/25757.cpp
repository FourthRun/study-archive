#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int n;
    char c;
    string s;
    set<string> name;

    cin >> n >> c;

    while(n--) {
        cin >> s;

        name.insert(s);
    }

    if(c == 'Y') cout << name.size();
    else if(c == 'F') cout << name.size() / 2;
    else if(c == 'O') cout << name.size() / 3;

    return 0;
}