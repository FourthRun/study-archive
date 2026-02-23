#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, time;
    int sum = 0;
    vector<int> v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> time;

        v.push_back(time);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++) {
        sum += v[i] * (n - i);
    }

    cout << sum;

    return 0;
}