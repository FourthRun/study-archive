#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, temp;
    queue<int> q;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        q.push(i);
    }

    while(q.size() > 1) {
        q.pop();

        if(q.size() == 1) break;
        
        temp = q.front();

        q.pop();
        q.push(temp);
    }

    cout << q.front();

    return 0;
}