#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    string s;
    set<string> hear;
    set<string> see;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> s;

        hear.insert(s);
    }

    for(int i = 0; i < m; i++) {
        cin >> s;

        if(hear.count(s)) {
            see.insert(s);
        }
    }

    cout << see.size() << "\n";

    for(string s : see) {
        cout << s << "\n";
    }

    return 0;
}