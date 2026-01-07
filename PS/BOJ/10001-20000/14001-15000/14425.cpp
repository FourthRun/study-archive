#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<string> s;
    int n, m;
    int count = 0;
    string str;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> str;

        s.insert(str);
    }

    for(int i = 0; i < m; i++) {
        cin >> str;

        if(s.find(str) != s.end()) {
            count++;
        }
    }

    cout << count;

    return 0;
}