#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, t, com, d;
    stack<int> stk1;
    stack<int> stk2;
    stack<int> stk3;

    cin >> n >> t;

    for(int i = n; i > 0; --i) {
        stk1.push(i);
    }

    for(int i = 0; i < t; ++i) {
        cin >> com >> d;

        if(com == 1) {
            for(int j = 0; j < d; ++j) {
                if(!stk1.empty()) {
                    stk2.push(stk1.top());

                    stk1.pop();
                }
            }
        }
        else if(com == 2) {
            for(int j = 0; j < d; ++j) {
                if(!stk2.empty()) {
                    stk3.push(stk2.top());

                    stk2.pop();
                }
            }
        }
    }

    while(!stk3.empty()) {
        cout << stk3.top() << "\n";

        stk3.pop();
    }

    return 0;
}