#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n;
    long long num, mid, count;
    long long high = 0;
    long long low = 1;
    long long result = 0;
    vector<long long> v;

    cin >> k >> n;

    for(int i = 0; i < k; i++) {
        cin >> num;

        v.push_back(num);

        if(high < num) high = num;
    }

    while(low <= high) {
        mid = (low + high) / 2;
        count = 0;

        for(int i = 0; i < k; i++) {
            count += v[i] / mid;
        }

        if(count >= n) {
            result = mid;
            low = mid + 1;
        } else high = mid - 1;
    }

    cout << result;

    return 0;
}