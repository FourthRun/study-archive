#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, idx;
    long long res = 0;
    stack<long long> stk;

    cin >> n;

    vector<long long> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    v.push_back(0);

    for(int i = 0; i < v.size(); ++i) {
        while(!stk.empty() && v[stk.top()] > v[i]) {
            idx = stk.top();

            stk.pop();

            if(stk.empty()) res = max(res, v[idx] * i);
            else res = max(res, v[idx] * (i - stk.top() - 1));
        }

        stk.push(i);
    }

    cout << res;

    return 0;
}