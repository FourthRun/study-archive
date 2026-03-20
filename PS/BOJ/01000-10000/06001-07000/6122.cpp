#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

int main() {
    vector<int> result(146);
    vector<pair<int, int>> v(146);
    int n, c, h, m, tag;
    string s;

    cin >> n >> c;

    for(int i = 0; i < c; i++) {
        cin >> tag >> s >> h >> m;

        if(s == "START") v[tag] = {h, m};
        else result[tag] += h * 60 + m - v[tag].first * 60 - v[tag].second; 
    }

    for(int i = 1; i <= n; i++) {
        cout << result[i] / 60 << " " << result[i] % 60 << "\n";
    }

    return 0;
}