#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, temp;
    int count = 0;
    queue<int> q;

    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        q.push(i);
    }

    cout << "<";


    while(!q.empty()) {
        if(count == k - 1) {
            cout << q.front();

            q.pop();

            if(!q.empty()) cout << ", ";

            count = 0;
        }
        else {
            temp = q.front();

            q.pop();
            q.push(temp);
            count++;
        }
    }

    cout << ">";

    return 0;
}