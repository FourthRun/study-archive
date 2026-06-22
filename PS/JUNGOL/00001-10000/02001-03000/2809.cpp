#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    vector<int> v;

    cin >> n;

    for(int i = 1; i * i <= n; ++i) {
        if(i * i == n) v.push_back(i);
        else if(n % i == 0) {
            v.push_back(i);
            v.push_back(n / i);
        }
    }

    sort(v.begin(), v.end());

    for(int i : v) {
        cout << i << " ";
    }

    return 0;
}