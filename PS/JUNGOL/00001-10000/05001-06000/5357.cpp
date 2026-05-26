#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l, h;
    int cnt = 0;
    bool check = true;

    cin >> n >> l;

    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<>());

    for(int i = 0; i < n; ++i) {
        if(v[i] < i + 1) {
            h = i;

            break;
        }
    }

    if(h < n && v[h] >= h) {
        for(int i = 0; i <= h; ++i) {
            if(v[i] == h) ++cnt;
        }

        if(cnt <= l) ++h;
    }

    cout << h;

    return 0;
}