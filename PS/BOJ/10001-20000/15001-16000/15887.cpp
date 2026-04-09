#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    int n;
    int cnt = 0;

    cin >> n;

    vector<int> v(n);
    vector<pair<int, int>> lr;

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for(int i = 0; i < n; ++i) {
        if(i + 1 == v[i]) continue;
        else {
            for(int j = i + 1; j < n; ++j) {
                if(i + 1 == v[j]) {
                    reverse(v.begin() + i, v.begin() + j + 1);

                    lr.push_back({i + 1, j + 1});

                    ++cnt;
                }
            }
        }
    }

    cout << cnt << "\n";

    for(const auto &it : lr) {
        cout << it.first << " " << it.second << "\n";
    }

    return 0;
}