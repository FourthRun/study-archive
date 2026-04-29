#include <iostream>

using namespace std;

int main() {
    char c;

    while(1) {
        cin >> c;

        cout << c << " -> " << int(c) << "\n";

        if(c == '0') break;
    }

    return 0;
}