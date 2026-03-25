#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    int cnt = 0;
    bool check = true;

    cin >> n >> k;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];

        if(v[i] % k != cnt) {
            check = false;
        }

        ++cnt;
        cnt %= k;
    }

    if(check) cout << "Yes";
    else cout << "No";

    return 0;
}