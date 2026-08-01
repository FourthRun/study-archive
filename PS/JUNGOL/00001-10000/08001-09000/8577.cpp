#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Meet{
    int s;
    int e;
    int idx;
};

bool compare(const Meet& x, const Meet& y) {
    if(x.e - x.s != y.e - y.s) return x.e - x.s < y.e - y.s;
    
    return x.s < y.s;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    vector<Meet> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i].s >> v[i].e;

        v[i].idx = i + 1;
    }

    sort(v.begin(), v.end(), compare);

    for(Meet i : v) {
        cout << i.idx << "\n";
    }

    return 0;
}