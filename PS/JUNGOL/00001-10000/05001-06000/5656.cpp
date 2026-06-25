#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, newNum;
    long long cnt = 0;
    string num;
    map<int, int> m;

    m[0] = 1;

    cin >> n >> num;

    vector<long long> v(n + 1);
    vector<long long> s(n + 1);

    for(int i = 1; i <= n; ++i) {
        v[i] = num[i - 1] - '0';

        s[i] = v[i] + s[i - 1];
    }

    for(int i = 1; i <= n; ++i) {
        newNum = s[i] - i;

        cnt += m[newNum];

        ++m[newNum];
    }

    cout << cnt;

    return 0;
}