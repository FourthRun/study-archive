#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n, temp;
    long long honey = 0;

    cin >> n;

    vector<long long> v(n + 1);
    vector<long long> s(n + 1);

    for(int i = 1; i <= n; ++i) {
        cin >> v[i];

        s[i] = v[i] + s[i - 1];
    }

    for(int i = 2; i <= n - 1; ++i) {
        temp = s[n] - s[1] - v[i] + s[n] - s[i]; 

        honey = max(honey, temp);

        temp = s[n - 1] - v[i] + s[i - 1];

        honey = max(honey, temp);

        temp = s[i] - s[1] + s[n - 1] - s[i - 1];

        honey = max(honey, temp);
    }

    cout << honey;

    // 3가지 케이스
    // 1. 벌1 L, 벌통 R, 벌2 위치 정하기
    // 2. 벌1 R, 벌통 L, 벌2 위치 정하기
    // 3. 벌1, 2 LR, 벌통 위치 정하기


    // 1. v[2] ~ v[n] - v[i] | v[i + 1] ~ v[n]
    // 2. v[1] ~ v[n - 1] - v[i] | v[1] ~ v[k - 1]
    // 3. v[2] ~ v[i] | v[i] ~ v[n - 1]

    return 0;
}