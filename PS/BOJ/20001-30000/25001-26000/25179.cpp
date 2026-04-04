#include <iostream>

using namespace std;

int main() {
    long long n, m;

    cin >> n >> m;

    if((n - 1) % (m + 1) == 0) cout << "Can't win";
    else cout << "Can win";

    return 0;
}