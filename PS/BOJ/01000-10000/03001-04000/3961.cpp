#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, cnt;
    string nows, s;
    vector<pair<int, string>> v;
    map<char, pair<int, int>> m = {
        {'q', {1, 1}}, {'w', {1, 2}}, {'e', {1, 3}}, {'r', {1, 4}}, {'t', {1, 5}}, {'y', {1, 6}}, {'u', {1, 7}}, {'i', {1, 8}}, {'o', {1, 9}}, {'p', {1, 10}}, 
        {'a', {2, 1}}, {'s', {2, 2}}, {'d', {2, 3}}, {'f', {2, 4}}, {'g', {2, 5}}, {'h', {2, 6}}, {'j', {2, 7}}, {'k', {2, 8}}, {'l', {2, 9}}, 
        {'z', {3, 1}}, {'x', {3, 2}}, {'c', {3, 3}}, {'v', {3, 4}}, {'b', {3, 5}}, {'n', {3, 6}}, {'m', {3, 7}} 
    };

    cin >> t;

    while(t--) {
        v.clear();

        cin >> nows >> n;

        for(int i = 0; i < n; ++i) {
            cnt = 0;

            cin >> s;

            for(int j = 0; j < nows.size(); ++j) {
                if(nows[j] != s[j]) {
                    cnt += abs(m[nows[j]].first - m[s[j]].first) + abs(m[nows[j]].second - m[s[j]].second);
                }
            }

            v.push_back({cnt, s});
        }

        sort(v.begin(), v.end());

        for(const auto& it : v) {
            cout << it.second << " " << it.first << "\n";
        }
    }

    return 0;
}