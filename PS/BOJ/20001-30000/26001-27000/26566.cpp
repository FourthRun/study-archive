#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int count;
    double a, p1, r, p2;
    const double PI = acos(-1);

    cin >> count;

    for(int i = 0; i < count; i++) {
        cin >> a >> p1 >> r >> p2;
        if(a / p1 > PI * r * r / p2) cout << "Slice of pizza\n";
        else cout << "Whole pizza\n";
    }

    return 0;
}