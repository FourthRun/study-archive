#include <iostream>

using namespace std;

int main() {
    int num;
    int g = 0;
    int e = 0;

    for(int i = 0; i < 4; ++i) {
        cin >> num;

        g += num;
    }

    for(int i = 0; i < 4; ++i) {
        cin >> num;

        e += num;
    }

    if(g > e) cout << "Gunnar";
    else if(g < e) cout << "Emma";
    else cout << "Tie";

    return 0;
}