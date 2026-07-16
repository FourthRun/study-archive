#include <iostream>

using namespace std;

const int idx = 10000000;
bool check[idx + 1];

int main() {
    check[1] = true;

    for(int i = 2; i * i <= idx; ++i) {
        if(check[i] == false) {
            for(int j = i * i; j <= idx; j += i) {
                check[j] = true;
            }
        }
    }

    int n, m;
    int cnt = 0;

    cin >> n >> m;

    for(int i = n; i <= m; ++i) {
        if(check[i] == false) ++cnt;
    }

    cout << cnt;

    return 0;
}