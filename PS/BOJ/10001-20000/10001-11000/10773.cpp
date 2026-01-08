#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, num;
    int count = 0;
    stack<int> stk;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;

        if(num == 0) stk.pop();
        else stk.push(num);
    }

    while(!stk.empty()) {
        count += stk.top();

        stk.pop();
    }

    cout << count;

    return 0;
}