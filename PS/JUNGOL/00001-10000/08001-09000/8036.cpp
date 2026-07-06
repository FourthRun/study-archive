#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, x, y;
    long long cnt = 0;
    map<long long, long long> xlist;
    map<long long, long long> ylist;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> x >> y;

        ++xlist[x];
        ++ylist[y];
    }

    for(auto it : xlist) {
        cnt += (it.second * (it.second - 1)) / 2;
    }

    for(auto it : ylist) {
        cnt += (it.second * (it.second - 1)) / 2;
    }

    cout << cnt;

    return 0;
}