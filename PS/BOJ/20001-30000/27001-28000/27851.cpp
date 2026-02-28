#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n, k, day;
    long long memo = -1;
    long long sum = 0;
    vector<long long> v;

    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> day;

        v.push_back(day);
    }

    for(int i = 0; i < n - 1; i++) {
        if(memo == -1) memo = v[i];

        if(v[i + 1] - v[i] > k) {
            sum += v[i] - memo + 1 + k;

            memo = -1;
        }
    }

    if(memo != -1) {
        sum += v[v.size() - 1] - memo + 1 + k;   
    }
    else sum += 1 + k;

    cout << sum;

    return 0;
}