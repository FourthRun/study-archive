#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> stk;
    int n, num;
    int len = 0;
    int cnt = 0;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> num;

        stk.push(num);
    }

    while(!stk.empty()) {
        if(stk.top() > len) {
            len = stk.top();

            ++cnt;
        }

        stk.pop();
    }

    cout << cnt;

    return 0;
}