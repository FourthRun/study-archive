#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, right, left, resR, resL, near, now;
    int target = 0;

    cin >> n;

    vector<int> v(n);
    left = 0;
    right = n - 1;

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    near = v[0] + v[n - 1];
    resL = v[left];
    resR = v[right];

    while(left < right) {
        now = v[left] + v[right];

        if(now == target) {
            resL = v[left];
            resR = v[right];

            break;
        }
        else {
            if(abs(near) > abs(now)) {
                resL = v[left];
                resR = v[right];
                near = now;
            }

            if(now > target) --right;
            else ++left;
        }
    }

    cout << resL << " " << resR;

    return 0;
}