#include <iostream>
#include <map>
#include <utility>
#include <string>

using namespace std;

int main() {
    int n;
    int cnt = 0;
    string city, state;
    map<pair<string, string>, int> m;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> city >> state;

        city = city.substr(0, 2);

        if(m.count({city, state}) && city != state) cnt += m[{city, state}];

        ++m[{state, city}];
    }

    cout << cnt;

    return 0;
}