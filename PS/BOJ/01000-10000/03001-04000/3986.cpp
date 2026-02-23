#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int n;
    int cnt = 0;
    string s;

    cin >> n;

    while(n--) {
        stack<char> stk;

        cin >> s;

        for(char c : s) {
            if(stk.empty()) stk.push(c);
            else if(!stk.empty()) {
                if(stk.top() == c) stk.pop();
                else stk.push(c);
            }
        }

        if(stk.empty()) cnt++;
    }

    cout << cnt;

    return 0;
}