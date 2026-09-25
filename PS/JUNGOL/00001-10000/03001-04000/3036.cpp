#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    string s, res;
    stack<char> stk;

    cin >> n >> k >> s;

    for(int i = 0; i < n; ++i) {
        while(!stk.empty() && stk.top() < s[i] && k > 0) {
            stk.pop();

            k--;
        }

        stk.push(s[i]);
    }

    while(!stk.empty()) {
        res += stk.top();

        stk.pop();
    }

    reverse(res.begin(), res.end());

    for(int i = 0; i < res.size() - k; ++i) {
        cout << res[i];
    }
    
    return 0;
}