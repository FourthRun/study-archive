#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cow;
    long long cnt = 0;
    stack<int> stk;

    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        cin >> cow;

        while(!stk.empty()) {
            if(stk.top() <= cow) stk.pop();
            else break;
        }

        cnt += stk.size();

        stk.push(cow);
    }

    cout << cnt;

    return 0;
}