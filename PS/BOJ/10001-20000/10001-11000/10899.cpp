#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long p, n, num;
    int cnt = 0;
    long long sum = 0;
    long long result = 0;
    vector<int> v;

    cin >> p >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;

        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++) {
        if(p > sum + v[i]) {
            sum += v[i];

            cnt++;
        }
        else break;
    }

    if(cnt == 1) result = p - 1;
    else if(cnt > 1) {
        result = --p;

        for(int i = 0; i < cnt - 1; i++) {
            p -= v[i];

            result += p;
        }
    }

    cout << cnt << " " << result;

    return 0;
}