#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, num;
    char c;
    queue<int> q;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> c;

        if(c == 'i') {
            cin >> num;

            q.push(num);
        }
        else if(c == 'o') {
            if(q.empty()) cout << "empty\n";
            else {
                cout << q.front() << "\n";

                q.pop();
            }
        }
        else cout << q.size() << "\n";
    }
    
    return 0;
}