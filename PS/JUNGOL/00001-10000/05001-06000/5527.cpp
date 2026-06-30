#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    int nowtime = 0;
    queue<int> q;
    string s;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> s;

        if(s == "call") {
            cin >> x;

            q.push(x);

            nowtime += x;
        }
        else if(s == "wait") {
            cin >> x;

            nowtime -= x;

            if(nowtime < 0) nowtime = 0;

            while(!q.empty() && x > 0) {
                if(q.front() <= x) {
                    x -= q.front();

                    q.pop();
                }
                else {
                    q.front() -= x;

                    break;
                }
            }
        }
        else if(s == "check") {
            cout << q.size() << " people " << nowtime << " minutes\n";
        }
    }

    return 0;
}