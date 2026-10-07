#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;
    vector<int> dp;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> num;

        auto it = lower_bound(dp.begin(), dp.end(), num);

        if(it == dp.end()) dp.push_back(num);
        else *it = num;
    }

    cout << dp.size();

    return 0;
}