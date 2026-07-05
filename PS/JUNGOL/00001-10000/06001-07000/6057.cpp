#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p, n, com, pri;
    long long result = 0;
    vector<queue<long long>> v(51);

    cin >> p >> n;

    for(int i = 0; i < n; ++i) {
        cin >> com;

        if(com == 0) {
            cin >> p >> pri;

            v[p].push(pri);
        }
        else if(com == 1) {
            cin >> p;

            if(!v[p].empty()) {
                result += v[p].front();

                v[p].pop();
            }
        }
    }

    cout << result;

    return 0;
}