#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string s;

    cin >> n >> s;

    for(int i = 0; i < (int)s.size(); i++) {
        if(n * i >= (int)s.size()) break;

        cout << s[n * i];
    }

    return 0;
}