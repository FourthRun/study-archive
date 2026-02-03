#include <iostream>
#include <cmath>
#include <algorithm>


using namespace std;

int main() {
    int x, y, x1, y1, x2, y2;
    double distance;

    cin >> x >> y >> x1 >> y1 >> x2 >> y2;

    if(x >= x1 && x <= x2) {
        distance = (min(abs(y1 - y), abs(y - y2)));
    }
    else if(y >= y1 && y < y2) {
        distance = (min(abs(x1 - x), abs(x - x2)));
    }
    else {
        if(x < x1) {
            if(y < y1) distance = sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y));
            else distance = sqrt((x1 - x) * (x1 - x) + (y - y2) * (y - y2));
        }
        else {
            if(y < y1) distance = sqrt((x - x2) * (x - x2) + (y1 - y) * (y1 - y));
            else distance = sqrt((x - x2) * (x - x2) + (y - y2) * (y - y2));
        }
    }

    cout << distance;

    return 0;
}