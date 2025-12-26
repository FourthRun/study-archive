#include <iostream>

using namespace std;

int main() {
    int t;
    int minX = 10001;
    int minY = 10001;
    int maxX = -10001;
    int maxY = -10001;

    cin >> t;

    for(int i = 0; i < t; i++) {
        int x, y;

        cin >> x >> y;

        if(x < minX) minX = x;

        if(x > maxX) maxX = x;

        if(y < minY) minY = y;

        if(y > maxY) maxY = y;
    }

    if(t < 2) cout << 0;
    else cout << (maxX - minX) * (maxY - minY);
    
    return 0;
}