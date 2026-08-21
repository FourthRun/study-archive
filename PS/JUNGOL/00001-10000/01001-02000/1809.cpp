#include <iostream>
#include <stack>
#include <vector>

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

    for(int i = 0; i < n; ++i) {
        while(!stk.empty() && v[i] > v[stk.top()]) {
            stk.pop();
        }

        if(stk.empty()) res.push_back(0);
        else res.push_back(stk.top() + 1);
        
        stk.push(i);
    }

    for(int i = 0; i < n; ++i) {
        cout << res[i] << " ";
    }

    return 0;
}