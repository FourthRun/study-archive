#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int buffersize, n;
    queue<int> q;

    cin >> buffersize;

    while(cin >> n) {
        if(n == -1) break;
        else if(n == 0) q.pop();
        else if(q.size() == buffersize) continue;
        else q.push(n);
    }

    if(q.empty()) cout << "empty";
    else {
        while(!q.empty()) {
            cout << q.front() << " ";

            q.pop();
        }
    }

    return 0;
}