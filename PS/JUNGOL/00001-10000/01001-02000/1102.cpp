#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, a;
    char c;
    stack<int> stk;

    cin >> n;

    while(n--) {
        cin >> c;

        if(c == 'i') {
            cin >> a;

            stk.push(a);
        }
        else if(c == 'c') cout << stk.size() << "\n";
        else if(c == 'o') {
            if(stk.empty()) cout << "empty\n";
            else {
                cout << stk.top() << "\n";

                stk.pop();
            }
        }
    }

    return 0;
}