#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long n1, n2;
    long long sum = 0;
    long long sse1 = 0;
    long long sse2 = 0;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];

        sum += v[i];
    }

    if(n % 2 == 1) {
        nth_element(v.begin(), v.begin() + n / 2, v.end());
        
        cout << v[n / 2];
    }
    else {
        nth_element(v.begin(), v.begin() + n / 2 - 1, v.end());

        cout << v[n / 2 - 1];
    }

    cout << " ";

    n1 = sum / n;
    n2 = sum / n + 1;

    for(int i = 0; i < n; ++i) {
        sse1 += (v[i] - n1) * (v[i] - n1);
        sse2 += (v[i] - n2) * (v[i] - n2);
    }

    if(sse1 <= sse2) cout << n1;
    else cout << n2;

    return 0;
}