#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Deliver {
    int send;
    int receive;
    int box;
};

bool compare(const Deliver &a, const Deliver &b) {
    if(a.receive != b.receive) return a.receive < b.receive;
    
    if(a.send != b.send) return a.send < b.send;

    return a.box > b.box;
}

int truck[2001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c, m, nowbox;
    int cnt = 0;

    cin >> n >> c >> m;

    vector<Deliver> v(m);

    for(int i = 0; i < m; ++i) {
        cin >> v[i].send >> v[i].receive >> v[i].box;
    }

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < m; ++i) {
        nowbox = v[i].box;

        for(int j = v[i].send; j < v[i].receive; ++j) {
            if(c - truck[j] < nowbox) nowbox = c - truck[j];
        }

        for(int j = v[i].send; j < v[i].receive; ++j) {
            truck[j] += nowbox;
        }

        cnt += nowbox;
    }

    cout << cnt;

    return 0;
}