#include <iostream>

using namespace std;

int calc(int n) {
    if(n <= 1) return 1;
    
    return n * calc(n - 1);
}

int main() {
    int n, result;

    cin >> n;

    result = calc(n);

    cout << result;

    return 0;
}