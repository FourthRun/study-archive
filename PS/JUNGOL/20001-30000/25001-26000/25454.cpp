#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int cnt = 0;

    cin >> n;

    vector<int> v(n + 1);

    for(int i = 1; i <= n; ++i) {
        cin >> v[i];

        cnt = max(cnt, v[i] + v[i - 1]);
    }

    cout << cnt << "\n";

    vector<vector<int>> res(cnt);

    for(int i = 1; i <= n; ++i) {
        if(v[i] > 0) {
            if(i % 2 == 1) {
                for(int j = 0; j < v[i]; ++j) {
                    res[j].push_back(i);
                }
            }
            else {
                for(int j = cnt - 1; j >= cnt - v[i]; --j) {
                    res[j].push_back(i);
                }
            }
        }
    }

    for(int i = 0; i < cnt; ++i) {
        cout << res[i].size() << " ";

        for(int j = 0; j < res[i].size(); ++j) {
            cout << res[i][j] << " ";
        }

        cout << "\n";
    }

    return 0;
}