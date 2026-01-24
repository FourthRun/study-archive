#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int n;
    string s1, s2;
    set<string> dance;

    dance.insert("ChongChong");

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s1 >> s2;

        if(dance.count(s1) || dance.count(s2)) {
            dance.insert(s1);
            dance.insert(s2);
        }
    }

    cout << dance.size();

    return 0;
}