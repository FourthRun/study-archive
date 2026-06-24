#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int res = 0;
    
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; ++i) {
        if(res + 1 >= v[i]) res += v[i];
        else break;
    }

    cout << res + 1;

    return 0;
}