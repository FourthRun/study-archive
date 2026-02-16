#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n, num;
    long long sum = 0;
    vector<long long> v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;

        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) {
        sum = sum + (v[i] * i) - (v[i] * (v.size() - i - 1));
    }

    cout << sum * 2;

    return 0;
}