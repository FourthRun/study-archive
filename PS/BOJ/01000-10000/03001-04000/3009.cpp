#include <iostream>

using namespace std;

int main() {
    int numX, numY;
    int x = 0;
    int y = 0;
    int countX = 0;
    int countY = 0;

    for(int i = 0; i < 3; i++) {
        cin >> numX >> numY;
        

        if(countX != 2 && (x == 0 || x != numX)) {
            x += numX;
            countX++;
        }
        else x -= numX;

        if(countY != 2 && (y == 0 || y != numY)) {
            y += numY;
            countY++;
        }
        else y -= numY;
    }

    cout << x << " " << y;

    return 0;
}