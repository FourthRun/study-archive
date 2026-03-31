#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    queue<int> q;

    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        q.push(i);
    }

    while(1) {
        if(k > q.size()) {
            cout << q.front();

            break;
        }

        q.push(q.front());

        for(int i = 0; i < k; i++) {
            q.pop();
        }
    }

    return 0;
}