#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    long long num;

    cin >> n >> m;

    vector<long long> v(m + 1);
    vector<long long> s(m + 1);

    for(int i = 1; i <= m; ++i) {
        cin >> v[i];

        s[i] = v[i] + s[i - 1];
    }

    while(n--) {
        cin >> num;

        auto it = lower_bound(s.begin(), s.end(), num);

        if(it == s.end()) cout << "Go away!\n";
        else cout << it - s.begin() << "\n";
    }

    return 0;
}