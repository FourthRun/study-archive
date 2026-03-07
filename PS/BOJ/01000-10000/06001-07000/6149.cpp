#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, p, temp;
    int cnt = 0;
    queue<int> q;
    vector<int> v;

    cin >> n >> k >> p;

    for(int i = 1; i <= k; i++) {
        q.push(i);
    }

    while(!q.empty()) {
        temp = q.front();
        ++cnt;

        if(cnt == n) {
            v.push_back(temp);
            cnt = 0;
        }

        q.pop();

        for(int i = 0; i < p; i++) {
            temp = q.front();

            q.push(temp);
            q.pop();
        }
    }

    sort(v.begin(), v.end());
    
    for(int i : v) {
        cout << i << "\n";
    }
    
    return 0;
}