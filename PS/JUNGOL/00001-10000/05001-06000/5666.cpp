#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, len;
    long long pow = 2;
    string s;
    vector<int> v;

    v.push_back(0);

    while(pow <= 1000000000) {
        v.push_back(pow);

        pow *= 2;
    }

    cin >> n;

    for(int i = 1; i <= 30; ++i) {
        if(v[i] >= n) {
            len = i;
            break;
        }
        else n -= v[i];
    }

    --n;

    if(n == 0) s = '4';
    else {
        while(n > 0) {
            if(n % 2 == 1) s += '7';
            else s += '4';
            
            n /= 2;
        }
    }

    reverse(s.begin(), s.end());

    for(int i = 0; i < len - s.size(); ++i) {
        cout << '4';
    }

    cout << s;
    
    return 0;
}