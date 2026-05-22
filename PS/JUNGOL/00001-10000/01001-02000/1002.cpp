#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int n, num;
    int result_gcd;
    int result_lcm;

    cin >> n >> num;

    result_gcd = num;
    result_lcm = num;
    
    for(int i = 0; i < n - 1; ++i) {
        cin >> num;

        result_gcd = gcd(result_gcd, num);
        result_lcm = lcm(result_lcm, num);
    }

    cout << result_gcd << " " << result_lcm;

    return 0;
}