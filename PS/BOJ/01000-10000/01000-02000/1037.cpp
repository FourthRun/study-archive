#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    vector<int> v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> m;

        v.push_back(m);
    }

    sort(v.begin(), v.end());

    cout << v[0] * v[v.size() - 1];

    return 0;
}