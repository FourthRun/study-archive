#include <iostream>

using namespace std;

int main() {
    long long n, m;
    long long res = 0;
    long long cnt, temp;

    cin >> n >> m;

    for(int i = n; i <= m; ++i) {
        cnt = 1;
        temp = i;

        while(1) {
            if(temp == 1) break;
            else if(temp % 2 == 0) temp /= 2;
            else temp = temp * 3 + 1;

            ++cnt;
        }

        res = max(res, cnt);
    }

    cout << res;

    return 0;
}