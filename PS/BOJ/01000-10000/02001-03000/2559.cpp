#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    int result = -100000001;

    cin >> n >> k;

    vector<int> v(n + 1, 0);
    vector<int> s(n + 1, 0);

    for(int i = 1; i < k; i++) {
        cin >> v[i];

        s[1] += v[i];
    }

    for(int i = k; i <= n; i++) {
        cin >> v[i];

        s[i - k + 1] += s[i - k] + v[i] - v[i - k];

        if(s[i - k + 1] > result) result = s[i - k + 1];
    }

    cout << result;

    return 0;
}