#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
    string s, t, temp;
    stack<char> stk;

    cin >> s >> t;

    reverse(t.begin(), t.end());

    for(int i = 0; i < s.size(); ++i) {
        temp.clear();

        stk.push(s[i]);

        if(s[i] == t[0]) {
            for(int j = 0; j < t.size(); ++j) {
                if(stk.empty()) break;
                else {
                    temp += stk.top();

                    stk.pop();
                }
            }

            if(t != temp) {
                for(int j = temp.size() - 1; j >= 0; --j) {
                    stk.push(temp[j]);
                }
            }
        }
    }

    temp = "";

    while(!stk.empty()) {
        temp += stk.top();

        stk.pop();
    }

    reverse(temp.begin(), temp.end());

    cout << temp;

    return 0;
}