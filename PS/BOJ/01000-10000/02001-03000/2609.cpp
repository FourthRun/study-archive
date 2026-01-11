#include <iostream>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;

    cin >> a >> b;

    int result = gcd(a, b);

    cout << result << "\n" << a * b / result; 

    return 0;
}