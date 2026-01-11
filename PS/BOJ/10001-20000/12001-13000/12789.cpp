#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, num;
    int checkNum = 1;
    stack<int> stk;
    bool check = true;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> num;

        if(checkNum == num) {
            checkNum++;

            while(!stk.empty() && checkNum == stk.top()) {
                checkNum++;

                stk.pop();
            }
        } 
        else {
            if(stk.empty()) stk.push(num);
            else {
                if(stk.top() < num) {
                    check = false;

                    break;
                }
                else stk.push(num);
            }
        }
    }

    if(check) cout << "Nice";
    else cout << "Sad";
    
    return 0;
}