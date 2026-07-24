#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct meeting {
    int s;
    int e;
    int idx;
};

bool compare(const meeting &a, const meeting &b) {
    if(a.e != b.e) return a.e < b.e;

    if(a.s != b.s) return a.s < b.s;
 
    return a.idx < b.idx;
}

int main() {
    int n;
    int now = 0;
    vector<int> res;

    cin >> n;

    vector<meeting> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i].idx >> v[i].s >> v[i].e;
    }

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < n; ++i) {
        if(now <= v[i].s) {
            res.push_back(v[i].idx);

            now = v[i].e;
        }
    }

    cout << res.size() << "\n";

    for(int i : res) {
        cout << i << " ";
    }

    return 0;
}