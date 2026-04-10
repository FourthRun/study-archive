#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, a, b, max;

    cin >> t;

    while(t--) {
        vector<int> v(201);
        max = 0;

        cin >> n;

        for(int i = 0; i < n; ++i) {
            cin >> a >> b;

            if(a > b) swap(a, b);

            for(int j = a; j <= b; ++j) {
                if(j % 2 == 1) {
                    ++v[j / 2];
                    ++j;
                }
                else ++v[j / 2 - 1];
            }
        }

        for(int i = 0; i < v.size(); ++i) {
            if(v[i] > max) max = v[i];
        }

        cout << max * 10 << "\n";
    }

    return 0;
}