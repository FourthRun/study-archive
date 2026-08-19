#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, res1, res2;

    vector<int> v(10);

    for(int i = 0; i < 10; ++i) {
        cin >> v[i];
    }

    cin >> n;

    res1 = 0;
    res2 = 1001;

    for(int i = 0; i < 10; ++i) {
        if(n > v[i]) res1 = max(res1, v[i]);
        
        if(n < v[i]) res2 = min(res2, v[i]);
    }

    if(res1 == 0) res1 = n;

    if(res2 == 1001) res2 = n;

    cout << res1 << "\n" << res2;

    return 0;
}