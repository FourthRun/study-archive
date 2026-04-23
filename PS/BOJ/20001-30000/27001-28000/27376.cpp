#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct street {
    long long x;
    long long t;
    long long s;
};

bool compare(const street& a, const street& b) {
    return a.x < b.x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    long long before = 0;
    long long cnt = 0;

    cin >> n >> k;

    vector<street> v(k);

    for(int i = 0; i < k; ++i) {
        cin >> v[i].x >> v[i].t >> v[i].s;
    }

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < k; ++i) {
        cnt += v[i].x - before;

        before = v[i].x;

        if(cnt < v[i].s) cnt = v[i].s;
        else if(((cnt - v[i].s) / v[i].t) % 2 == 1) {
            cnt += v[i].t - (cnt - v[i].s) % v[i].t;
        }
    }

    cnt += n - before;

    cout << cnt;

    return 0;
}