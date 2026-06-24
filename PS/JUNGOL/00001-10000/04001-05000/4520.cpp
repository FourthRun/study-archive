#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, k;
    int cnt = 0;
    string s;

    cin >> n >> k >> s;

    for(int i = 0; i < n; ++i) {
        if(s[i] == 'P') {
            for(int j = max(0, i - k); j <= min(i + k, n - 1); ++j) {
                if(s[j] == 'H') {
                    s[j] = 'A';

                    ++cnt;

                    break;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}