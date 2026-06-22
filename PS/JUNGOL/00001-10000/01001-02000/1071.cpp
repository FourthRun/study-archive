#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    int res1 = 0;
    int res2 = 0;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    cin >> m;

    for(int i : v) {
        if(m % i == 0) res1 += i;

        if(i % m == 0) res2 += i;
    }

    cout << res1 << "\n" << res2;

    return 0;
}