#include <iostream>
#include <vector>
#include <numeric>

using namespace std;


int main() {
    int n;
    vector<int> v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int num;

        cin >> num;

        v.push_back(num);
    }

    int first = v[0];

    for(int &i : v) {
        i -= first;
    }

    int result = accumulate(v.begin() + 1, v.end(), v[0], [](int a, int b) {
        return gcd(a, b);
    });

    cout << v[n - 1] / result - v.size() + 1;

    return 0;
}