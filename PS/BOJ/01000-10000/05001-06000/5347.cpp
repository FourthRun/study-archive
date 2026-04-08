#include <iostream>
#include <numeric>

using namespace std;

int main() {
    long long n, a, b;

    cin >> n;

    while(n--) {
        cin >> a >> b;

        cout << lcm(a, b) << "\n";
    }

    return 0;
}