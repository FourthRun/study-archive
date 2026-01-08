#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, num, temp;
    stack<int> s;

    cin >> n;

    for(int i = 0; i < n; i++) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        cin >> num;

        if(num == 1) {
            cin >> temp;

            s.push(temp);
        }
        else if(num == 2) {
            if(s.empty()) cout << -1 << "\n";
            else {
                cout << s.top() << "\n";

                s.pop();
            }
        }
        else if(num == 3) {
            cout << s.size() << "\n";
        }
        else if(num == 4) {
            if(s.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else {
            if(s.empty()) cout << -1 << "\n";
            else cout << s.top() << "\n";
        }
    }

    return 0;
}