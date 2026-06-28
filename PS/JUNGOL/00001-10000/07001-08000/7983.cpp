#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long cnt = 0;
    long long total = 0;
    double temp, a, b;
    double now = -1;

    cin >> n;
    
    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];

        cnt += v[i];
    }
    
    sort(v.begin(), v.end());

    if(cnt == 0) {
        a = 0;
        b = 0;
    }
    else {
        for(int i = n - 1; i >= 0; --i) {
            total += v[i];

            temp = (((double)total / cnt) - double(n - i) / n) * 100;

            if(now <= temp) now = temp;
            else {
                a = (double(n - i - 1) / n) * 100;
                b = (double(total - v[i]) / cnt) * 100;

                break;
            }
        }
    }

    cout << a << "\n" << b;

    return 0;
}