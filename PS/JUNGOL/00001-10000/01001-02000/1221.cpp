#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, a, b;
    char c;
    stack<int> stk;

    cin >> n;

    while(n--) {
        cin >> c;

        if(c >= '0' && c <= '9') {
            stk.push((int)(c - '0'));
        }
        else if(c == '+') {
            b = stk.top();

            stk.pop();

            a = stk.top();

            stk.pop();
            stk.push(a + b);
            
        }
        else if(c == '-') {
            b = stk.top();

            stk.pop();

            a = stk.top();

            stk.pop();
            stk.push(a - b);
        }
        else if(c == '*') {
            b = stk.top();

            stk.pop();

            a = stk.top();

            stk.pop();
            stk.push(a * b);
        }
        else if(c == '/') {
            b = stk.top();

            stk.pop();

            a = stk.top();

            stk.pop();
            stk.push(a / b);
        }
    }

    cout << stk.top();

    return 0;
}