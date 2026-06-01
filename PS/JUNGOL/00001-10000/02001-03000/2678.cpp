#include <iostream>

using namespace std;

int main() {
    int n;
    unsigned long long m = 1;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        m *= 2;
    }

    cout << m;

    return 0;
}