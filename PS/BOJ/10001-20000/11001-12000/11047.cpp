#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    int cnt = 0;

    cin >> n >> k;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i = n - 1; i >= 0; i--) {
        while(k >= v[i]) {
            k -= v[i];

            cnt++;
        }
    }

    cout << cnt;

    return 0;
}