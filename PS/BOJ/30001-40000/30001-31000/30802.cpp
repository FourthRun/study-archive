#include <iostream>

using namespace std;

int calc(int num, int t) {
    return (num + t - 1) / t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s, m, l, xl, xxl, xxxl, t, p;
    int countT = 0;
    
    cin >> n >> s >> m >> l >> xl >> xxl >> xxxl >> t >> p;

    countT += calc(s, t);
    countT += calc(m, t);
    countT += calc(l, t);
    countT += calc(xl, t);
    countT += calc(xxl, t);
    countT += calc(xxxl, t);

    cout << countT << "\n" << n / p << " " << n % p;

    return 0;
}