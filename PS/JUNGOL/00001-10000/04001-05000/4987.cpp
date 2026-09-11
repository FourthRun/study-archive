#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;

    cin >> s >> t;

    while(s.find(t) != string::npos) {
        s.erase(s.begin() + s.find(t), s.begin() + s.find(t) + t.size());
    }

    cout << s;

    return 0;
}