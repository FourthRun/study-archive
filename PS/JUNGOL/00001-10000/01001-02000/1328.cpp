#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    stack<int> stk;
    vector<int> res;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for(int i = n - 1; i >= 0; --i) {
        while(!stk.empty() && v[i] >= v[stk.top() - 1]) {
            stk.pop();
        }

        if(stk.empty()) res.push_back(0);
        else res.push_back(stk.top());

        stk.push(i + 1);
    }

    reverse(res.begin(), res.end());

    for(int i = 0; i < n; ++i) {
        if(res[i] == i + 1) cout << 0 << "\n";
        else cout << res[i] << "\n";
    }

    return 0;
}