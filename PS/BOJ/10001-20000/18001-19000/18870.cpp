#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pair<int, int>> v1;
    int n, num;
    int prev = 1000000001;
    int count = -1;

    cin >> n;

    vector<int> v2(n);

    for(int i = 0; i < n; i++) {
        cin >> num;

        v1.push_back({num, i});
    }

    sort(v1.begin(), v1.end());

    for(int i = 0; i < n; i++) {
        if(v1[i].first != prev) count++;

        v2[v1[i].second] = count;

        prev = v1[i].first;
    }

    for(int i : v2) {
        cout << i << " ";
    }

    return 0;
}