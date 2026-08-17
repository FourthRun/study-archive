#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n, cnt;

    cin >> t;

    while(t--) {
        cin >> n;

        vector<int> v(n);
        cnt = 0;

        for(int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        for(int i = 0; i < n; ++i) {
            for(int j = i + 1; j < n; ++j) {
                if(v[i] > v[j]) ++cnt;
            }
        }

        if(cnt % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}