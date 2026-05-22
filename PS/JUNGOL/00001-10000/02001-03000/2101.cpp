#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    double num;
    
    cin >> n;

    vector<double> v(n + 1);

    for(int i = 1; i <= n; ++i) {
        cin >> num;

        v[i] = max(num, v[i - 1] * num);
    }

    cout << fixed << setprecision(3) << *max_element(v.begin(), v.end());

    return 0;
}