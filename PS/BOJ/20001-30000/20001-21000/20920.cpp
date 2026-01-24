#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>

using namespace std;

bool compare(const pair<string, int>& a, const pair<string, int>& b) {
    if(a.second != b.second) {
        return a.second > b.second;
    }
    
    if(a.first.size() != b.first.size()) {
        return a.first.size() > b.first.size();
    }

    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, index;
    string s;
    vector<pair<string, int>> v;
    map<string, int> word;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> s;

        if(s.size() >= m) {
            if(word.count(s)) {
                word[s]++;
            }
            else word.insert({s, 1});
        }
    }

    v.assign(word.begin(), word.end());

    sort(v.begin(), v.end(), compare);

    for(const auto& p : v) {
        cout << p.first << "\n";
    }

    return 0;
}