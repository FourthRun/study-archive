#include <iostream>

using namespace std;

int main() {
    int m, f;

    while(cin >> m >> f) {
        if(m == 0 && f == 0) break;
        else {
            cout << m + f << "\n";
        }
    }

    return 0;
}