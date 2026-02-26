#include <iostream>

using namespace std;

int main() {
    int money, a, b, c;

    cin >> money >> a >> b >> c;

    if(money >= a) cout << "Watermelon";
    else if(money >= b) cout << "Pomegranates";
    else if(money >= c) cout << "Nuts";
    else cout << "Nothing";

    return 0;
}