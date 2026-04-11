#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, price;
    long long cnt = 0;
    long long min = 1000000001;

    cin >> n;
    
    vector<int> v(n - 1);

    for(int i = 0; i < n - 1; ++i) {
        cin >> v[i];
    }

    for(int i = 0; i < n - 1; ++i) {
        cin >> price;

        if(price < min) min = price;

        cnt += v[i] * min;
    }

    cout << cnt;

    return 0;
}