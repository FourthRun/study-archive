#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, num1, num2;
    int count = 0;

    cin >> n >> m;

    vector<int> v(n + 1);
    vector<int> s(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        s[i] = s[i - 1] + v[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> num1 >> num2;

        cout << s[num2] - s[num1 - 1] << "\n";
    }

    return 0;
}