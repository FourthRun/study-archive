#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p;
    int nownum = 0;
    int cnt = 0;
    priority_queue<int, vector<int>, greater<>> pq;

    cin >> n >> p;

    vector<long long> v(n + 1);
    vector<long long> s(n + 1);

    for(int i = 1; i <= n; ++i) {
        cin >> v[i];

        s[i] = s[i - 1] + v[i];
    }

    for(int i = 1; i <= n; ++i) {
        nownum += v[i];

        pq.push(v[i]);

        if(s[i] < p) cout << -1 << " ";
        else {
            //cout << nownum << "\n";

            while(nownum - pq.top() >= p) {
                //cout << pq.top() << " ";

                nownum -= pq.top();

                pq.pop();
            }

            cout << pq.size() << " ";
        }
    }

    return 0;
}