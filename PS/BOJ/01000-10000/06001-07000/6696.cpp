#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, distance, r, area;
    const double PI = acos(-1.0);
    int sum;

    while(cin >> x >> y) {
        if(x == 0 && y == 0) break;
        sum = 0;

        distance = sqrt(x * x + y * y);

        area = PI * distance * distance / 2;

        while(area > 0) {
            area -= 50;
            sum++;
        }

        cout << "The property will be flooded in hour " << sum << ".\n";
    }

    return 0;
}