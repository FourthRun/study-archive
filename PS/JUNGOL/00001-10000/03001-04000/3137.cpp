#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    bool check;

    cin >> t;

    while(t--) {
        cin >> n;

        vector<string> v(n);
        check = true;

        for(int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for(int i = 0; i < n - 1; ++i) {
            if(v[i] == v[i + 1].substr(0, v[i].size())) {
                check = false;

                break;
            }
        }

        if(check) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;
}