#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;

    cin >> s1 >> s2;

    cout << s1.substr(0, 2) << s2.substr(2) << s1.substr(0, 2);

    return 0;
}