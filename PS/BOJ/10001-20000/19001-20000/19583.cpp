#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, e, q, t, name;
    int si, ei, qi, ti;
    int cnt = 0;
    map<string, int> m;

    cin >> s >> e >> q;

    si = stoi(s.substr(0, 2)) * 100 + stoi(s.substr(3, 5));
    ei = stoi(e.substr(0, 2)) * 100 + stoi(e.substr(3, 5));
    qi = stoi(q.substr(0, 2)) * 100 + stoi(q.substr(3, 5));

    while(cin >> t >> name) {
        ti = stoi(t.substr(0, 2)) * 100 + stoi(t.substr(3, 5));

        if(ti <= si) m[name] = 1;
        else if(ei <= ti && ti <= qi) {
            if(m[name] == 1) m[name] = 2;
        }
    }

    for(const auto& it : m) {
        if(it.second == 2) ++cnt;
    }

    cout << cnt;

    return 0;
}