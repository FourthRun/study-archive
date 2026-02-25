#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, num;
    long long max = 0;

    cin >> n;

    vector<long long> v(n + 1);
    vector<long long> s(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        cin >> v[i];

        s[i] = s[i - 1] + v[i];

        if(v[i] - s[i - 1] > max) max = v[i] - s[i - 1];
    }
    
    cout << max;

    return 0;
}