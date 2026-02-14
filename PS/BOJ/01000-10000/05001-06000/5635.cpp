#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, y, m, d;
    string s1, s2;
    vector<pair<string, string>> v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s2 >> d >> m >> y;

        s1 = to_string(y);
        
        if(m < 10) s1 = s1 + "0" + to_string(m);
        else s1 += to_string(m);

        if(d < 10) s1 = s1 + "0" + to_string(d);
        else s1 += to_string(d);

        v.push_back({s1, s2});
    }

    sort(v.begin(), v.end());

    cout << v[v.size() - 1].second << "\n" << v[0].second; 

    return 0;
}