#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>, greater<>> pq;
    int n, m, num;

    cin >> n;

    while(n--) {
        cin >> num;

        pq.push(num);
    }

    cin >> m;

    while(m--) {
        cin >> num;

        pq.push(pq.top() + num);

        pq.pop();
    }

    while(!pq.empty()) {
        cout << pq.top() << " ";

        pq.pop();
    }

    return 0;
}