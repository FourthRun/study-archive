#include <iostream>

using namespace std;

int calc(int n) {
    if(n > 1) return calc(n - 1) + calc(n - 2);
    else if(n == 1) return 1;
    else return 0;
}

int main() {
    int n;

    cin >> n;

    cout << calc(n);

    return 0;
}