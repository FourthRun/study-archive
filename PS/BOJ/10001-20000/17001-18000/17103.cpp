#include <iostream>

using namespace std;

const int MAX = 1000000;
bool arr[MAX + 1];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    arr[0] = true;
    arr[1] = true;

    for(int i = 2; i * i <= MAX; i++) {
        if(!arr[i]) {
            for(int j = i * i; j <= MAX; j += i) {
                arr[j] = true;
            }
        }
    }

    int t, n, cnt;

    cin >> t;

    while(t--) {
        cnt = 0;

        cin >> n;

        for(int i = 2; i <= n / 2; i++) {
            if(!arr[i] && !arr[n - i]) cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}