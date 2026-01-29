#include <iostream>

using namespace std;

int main() {
    int n, m, sum;

    cin >> n >> m;

    sum = n;

    while(n / m) {
        n /= m;
        
        sum += n;
    }

    cout << sum;

    return 0;
}