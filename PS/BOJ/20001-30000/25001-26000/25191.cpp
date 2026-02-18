#include <iostream>

using namespace std;

int main() {
    int chicken, coke, beer;

    cin >> chicken >> coke >> beer;

    coke /= 2;

    if(chicken < coke + beer) cout << chicken;
    else cout << coke + beer;

    return 0;
}