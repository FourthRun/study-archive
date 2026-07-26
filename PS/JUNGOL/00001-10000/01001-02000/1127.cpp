#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int n;
long long ta1 = 1;
long long ta2 = 0;
long long res = 10000000000;
vector<pair<long long, long long>> v(10);

void tracking(int now) {
    ta1 *= v[now].first;
    ta2 += v[now].second;

    res = min(res, abs(ta1 - ta2));

    for(int i = now + 1; i < n; ++i) {
        tracking(i);
    }

    ta1 /= v[now].first;
    ta2 -= v[now].second;
}

int main() {
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }

    for(int i = 0; i < n; ++i) {
        tracking(i);
    }

    cout << res;

    return 0;
}