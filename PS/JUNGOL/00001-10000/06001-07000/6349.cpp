#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n, num, a;
    vector<long long> v;
    bool check = true;

    cin >> num;

    n = num;

    for(long long i = 2; i * i <= n; ++i) {
        while(n % i == 0) {
            n /= i;

            v.push_back(i);
        }
    }

    if(n > 1) v.push_back(n);

    if(num == 1) cout << 'N';
    else if(v.size() == 1) cout << 'Y';
    else if(v.size() == 2 && v[0] != v[1]) cout << 'Y';
    else {
        a = v[0];

        for(int i = 1; i < v.size(); ++i) {
            if(a != v[i]) {

                check = false;

                break;
            }    
        }

        if(check && v.size() % 2 == 1) cout << 'Y';
        else cout << 'N';
    }

    return 0;
}