#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool check = true;
    int n, num;
    int count = 1;
    stack<int> s;
    queue<char> q;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;

        while(num >= count) {
            s.push(count);

            q.push('+');

            count++;
        }

        if(s.top() == num) {
            s.pop();

            q.push('-');
        }
        else {
            check = false;

            break;
        }
    }

    if(check) {
        int j = q.size();

        for(int i = 0; i < j; i++) {
            cout << q.front() << "\n";

            q.pop();
        }
    }
    else cout << "NO";

    return 0;
}