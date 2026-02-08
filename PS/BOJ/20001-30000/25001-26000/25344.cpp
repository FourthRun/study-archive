#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int n;
    long long a, b;
    long long sum = 1;

    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> a;

        b = sum;

        sum = gcd(a, b);

        sum = a * b / sum;
    }

    cout << sum;
}