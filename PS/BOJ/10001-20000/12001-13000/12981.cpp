#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v(3);
    int cnt = 0;

    cin >> v[0] >> v[1] >> v[2];

    sort(v.begin(), v.end());

    cnt += v[0];

    v[1] -= v[0];
    v[2] -= v[0];

    if(v[1] % 3 == 1 && v[2] % 3 == 1) {
        --v[1];
        --v[2];
        ++cnt;
    }

    while(v[1] > 0) {
        v[1] -= 3;
        ++cnt;
    }

    while(v[2] > 0) {
        v[2] -= 3;
        ++cnt;
    }

    cout << cnt;

    return 0;
}