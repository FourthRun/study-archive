#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;

    if(a > 0) {
        cout << (b - a) * e;
    }
    else {
        cout << abs(a) * c + d + b * e;
    }
    
    return 0;
}