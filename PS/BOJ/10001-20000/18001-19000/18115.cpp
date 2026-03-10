#include <iostream>
#include <deque>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num, check, temp;
    deque<int> deq;
    stack<int> stk;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;

        stk.push(num);
    }

    for(int i = 1; i <= n; i++) {
        check = stk.top();
        stk.pop();

        if(check == 1) {
            deq.push_front(i);
        }
        else if(check == 2) {
            temp = deq.front();

            deq.pop_front();

            deq.push_front(i);

            deq.push_front(temp);
        }
        else {
            deq.push_back(i);
        }
    }

    for(int i = 0; i < n; i++) {
        cout << deq.front() << " ";
        
        if(!deq.empty()) deq.pop_front();
    }

    return 0;
}