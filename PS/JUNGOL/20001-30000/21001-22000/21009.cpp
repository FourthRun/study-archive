#include <iostream>

using namespace std;

const int N = 10000000;
int arr[N + 1];

bool check(int a, int b) {
    int cnt[10] = {0};

    while(a > 0) {
        ++cnt[a % 10];

        a /= 10;
    }

    while(b > 0) {
        --cnt[b % 10];

        b /= 10;
    }

    for(int i = 0; i < 10; ++i) {
        if(cnt[i] != 0) return false;
    }

    return true;
}

int main() {
    for(int i = 1; i <= N; ++i) {
        arr[i] = i;
    }

    for(int i = 2; i <= N; ++i) {
        if(arr[i] == i) {
            for(int j = i; j <= N; j += i) {
                arr[j] -= arr[j] / i;
            }
        }
    }

    int n;
    int res = -1;
    double ratio = 10000000;

    cin >> n;

    for(int i = 2; i <= n; ++i) {
        if(check(i, arr[i])) {
            if(ratio > (double)i / (double)arr[i]) {
                ratio = (double)i / (double)arr[i];

                res = i;
            }
        }
    }

    cout << res;
    
    return 0;
}