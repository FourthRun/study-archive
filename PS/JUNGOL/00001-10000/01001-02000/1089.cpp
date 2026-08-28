#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, num;
    priority_queue<int, vector<int>, greater<>> pq1;
    priority_queue<int> pq2;

    cin >> n >> m;

    if(m == 1) {
        for(int i = 0; i < n; ++i) {
            cin >> num;

            pq1.push(num);
        }

        while(!pq1.empty()) {
            cout << pq1.top() << "\n";

            pq1.pop();
        }
    }
    else {
        for(int i = 0; i < n; ++i) {
            cin >> num;

            pq2.push(num);
        }

        while(!pq2.empty()) {
            cout << pq2.top() << "\n";

            pq2.pop();
        }
    }

    return 0;
}