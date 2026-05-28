#include <iostream>

using namespace std;

int main() {
    int n, m;
    long long k;
    long long res = 0;

    cin >> n >> m;
    
    k = n;

    for(int i = 1; i <= m; ++i) {
        res += k;
        
        k += n;
    }

    cout << res;

    return 0;
}