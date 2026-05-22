#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    long long result = 0;
    map<long long, long long> m;
    m[0] = 1;

    cin >> n;

    vector<long long> v(n + 1);
    vector<long long> s(n + 1);

    for(long long i = 1; i <= n; ++i) {
        cin >> v[i];

        s[i] = v[i] + s[i - 1];

        if(m.find(s[i]) != m.end()) result += m[s[i]];

        ++m[s[i]];
    }

    cout << result;

    return 0;
}