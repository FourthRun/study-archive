#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;

    while(getline(cin, s)) {
        stack<char> stk;
        bool check = true;

        if(s == ".") break;
        else {
            for(char c : s) {
                if(c == '[') {
                    stk.push(c);
                }
                else if(c == '(') {
                    stk.push(c);
                }
                else if(!stk.empty()) {
                    if(c == ']') {
                        if(stk.top() == '[') stk.pop();
                        else {
                            check = false;

                            break;
                        }
                    }
                    else if(c == ')') {
                        if(stk.top() == '(') stk.pop();
                        else {
                            check = false;

                            break;
                        }
                    }
                }
                else if(stk.empty()) {
                    if(c == ')' || c == ']') {
                        check = false;

                        break;
                    }
                }
            }

            if(check && stk.empty()) cout << "yes\n";
            else cout << "no\n";
        }
    }

    return 0;
}