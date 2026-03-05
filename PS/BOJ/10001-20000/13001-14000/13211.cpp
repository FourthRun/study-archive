#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<string> stolen;
    string s;
    int n, m;
    int cnt = 0;

    cin >> n;

    while(n--) {
        cin >> s;

        stolen.insert(s);
    }

    cin >> m;

    while(m--) {
        cin >> s;

        if(stolen.count(s)) cnt++;
    }

    cout << cnt;

    return 0;
}