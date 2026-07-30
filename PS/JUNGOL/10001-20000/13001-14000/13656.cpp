#include <iostream>
#include <vector>

using namespace std;

bool is_prime[10001];

int main() {
    vector<int> v;

    is_prime[0] = true;
    is_prime[1] = true;

    for(int i = 2; i * i <= 10000; ++i) {
        if(is_prime[i] == false) {
            for(int j = i * i; j <= 10000; j += i) {
                is_prime[j] = true;
            }
        }
    }

    for(int i = 2; i <= 10000; ++i) {
        if(is_prime[i] == false) v.push_back(i);
    }

    int n, l, r, cnt;
    long long sum;

    while(cin >> n) {
        if(n == 0) break;
    
        cnt = 0;
        l = 0;
        r = 0;
        sum = 2;

        while(l <= r && r < v.size()) {
            if(sum == n) {
                sum -= v[l];

                ++l;
                ++cnt;
            }
            else if(sum > n) {
                sum -= v[l];

                ++l;
            }
            else {
                ++r;

                sum += v[r];
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}