#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, temp;
    string s;
    stack<int> stk;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s;

        if(s == "push") {
            cin >> temp;

            stk.push(temp);
        }
        else if(s == "pop") {
            if(stk.empty()) cout << "-1 \n";
            else {
                cout << stk.top() << "\n";

                stk.pop();
            }
        }
        else if(s == "size") cout << stk.size() << "\n";
        else if(s == "empty") {
            if(stk.empty()) cout << "1 \n";
            else cout << "0 \n";
        }
        else if(s == "top") {
            if(stk.empty()) cout << "-1 \n";
            else cout << stk.top() << "\n";
        }
    }

    return 0;
}