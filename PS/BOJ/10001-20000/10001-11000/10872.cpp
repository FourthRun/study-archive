#include <iostream>

using namespace std;

int main() {
    int n;
    int count = 1;
    
    cin >> n;

    for(int i = 1; i <= n; i++) {
        count *= i;
    }

    if(n == 0) cout << 1;
    else cout << count;

    return 0;
}