#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long maxnum = 0;
    long long res = 0;
    bool checks = true;
    bool checke = true;
    bool checkres = true;

    cin >> n;

    vector<long long> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];

        maxnum = max(maxnum, v[i]);
    }

    for(int i = 0; i < n; ++i) {
        res += maxnum - v[i];

        if(checks && maxnum != v[i]) checks = false;
        else if(checks == false && checke && maxnum == v[i]) checke = false;
        else if(checks == false && checke == false && maxnum != v[i]) checkres = false;
    }

    if(checkres) cout << res;
    else cout << res + n;

    return 0;
}