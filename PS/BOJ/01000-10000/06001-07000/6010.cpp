#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, num;

    cin >> n >> m;

    vector<int> v(n + 1);
    vector<int> s(n + 1);

    for(int i = 1; i <= n; ++i) {
        cin >> v[i];

        s[i] = v[i] + s[i - 1];
    }

    for(int i = 0; i < m; ++i) {
        cin >> num;

        for(int j = 1; j <= n; ++j) {
            if(s[j] > num) {
                cout << j << "\n";

                break;
            }
        }
    }

    return 0;
}