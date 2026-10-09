#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t, n, k, high, low, mid, cnt, now, res;
    stack<long long> stk;

    cin >> t;

    while(t--) {
        cin >> n >> k;

        vector<long long> v(n);
        low = 0;
        high = 0;

        for(int i = 0; i < n; ++i) {
            cin >> v[i];

            high += v[i];

            low = max(low, v[i]);
        }

        while(low <= high) {
            mid = low + (high - low) / 2;
            now = 0;
            cnt = 1;

            for(int i = 0; i < n; ++i) {
                if(now + v[i] > mid) {
                    ++cnt;

                    now = v[i];
                }
                else now += v[i];
            }

            if(cnt <= k) {
                res = mid;

                high = mid - 1;
            }
            else low = mid + 1;
        }

        now = 0;
        cnt = 1;

        for(int i = n - 1; i >= 0; --i) {
            if(i + 1 == k - cnt) {
                stk.push(-1);
                stk.push(v[i]);

                ++cnt;
            }
            else if(now + v[i] > res) {
                stk.push(-1);
                stk.push(v[i]);

                now = v[i];

                ++cnt;
            }
            else {
                stk.push(v[i]);

                now += v[i];
            }
        }

        while(!stk.empty()) {
            if(stk.top() == -1) cout << "/";
            else cout << stk.top();

            stk.pop();

            cout << " ";
        }

        cout << "\n";
    }

    return 0;
}