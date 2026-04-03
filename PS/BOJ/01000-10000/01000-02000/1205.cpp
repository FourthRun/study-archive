#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, score, p;
    int rank = 1;

    cin >> n >> score >> p;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];

        if(v[i] > score) ++rank;
    }

    sort(v.begin(), v.end(), greater<>());

    if(p > n) cout << rank;
    else if(score > v[p - 1]) cout << rank;
    else cout << -1;

    return 0;
}