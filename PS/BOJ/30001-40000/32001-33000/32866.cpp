#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n, x, damage, now, rise;

    cin >> n >> x;
    
    damage = n / 100 * x;

    now = n - damage;

    rise = damage * 100 / now;

    cout << fixed << setprecision(6) << rise;

    return 0;
}