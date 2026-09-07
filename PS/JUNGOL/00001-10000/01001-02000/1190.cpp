#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<long long, vector<long long>, greater<>> pq;
    long long n, num, a, b;
    long long cnt = 0;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> num;

        pq.push(num);
    }

    while(pq.size() > 1) {
        a = pq.top();

        pq.pop();

        b = pq.top();

        pq.pop();

        cnt += a + b;

        pq.push(a + b);
    }

    cout << cnt;

    return 0;
}