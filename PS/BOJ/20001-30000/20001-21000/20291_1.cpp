#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<string> v;
    string s;
    set<string> stringSet;
    map<string, int> m;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s;

        for(int j = 0; j < s.size(); j++) {
            if(s[j] == '.') {
                v.push_back(s.substr(j + 1, s.size() - j));

                m[s.substr(j + 1, s.size() - j)]++;

                break;
            }
        }
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) {
        if(!stringSet.count(v[i])) {
            stringSet.insert(v[i]);

            cout << v[i] << " " << m[v[i]] << "\n";
        }
    }

    return 0;
}