#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, temp;
    set<string> word;

    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        for(int j = 1; j <= s.size() - i; j++) {
            temp = s.substr(i, j);

            word.insert(temp);
        }
    }

    cout << word.size();

    return 0;
}