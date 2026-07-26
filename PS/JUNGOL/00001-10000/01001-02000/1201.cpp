#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, temp;
    int res = 0;

    cin >> n >> m;

    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            for(int k = j + 1; k < n; ++k) {
                temp = v[i] + v[j] + v[k];

                if(temp == m) res = temp;
                else if(temp < m) res = max(res, temp);
            }
        }
    }

    cout << res;

    return 0;
}