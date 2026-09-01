#include <iostream>
#include <algorithm>
#include <queue>
#include <set>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long l, num;
    int n, k, ncnt;
    int cnt = 0;
    queue<pair<long long, long long>> q;
    set<long long> s;

    cin >> l >> n >> k;

    for(int i = 0; i < n; ++i) {
        cin >> num;

        q.push({num, 0});

        s.insert(num);
    }

    while(cnt < k) {
        num = q.front().first;
        ncnt = q.front().second;

        cout << ncnt << "\n";

        if(!s.count(num - 1) && num - 1 >= 0) {
            q.push({num - 1, ncnt + 1});

            s.insert(num - 1);
        }

        if(!s.count(num + 1) && num + 1 <= l) {
            q.push({num + 1, ncnt + 1});

            s.insert(num + 1);
        }

        q.pop();

        ++cnt;
    }

    return 0;
}