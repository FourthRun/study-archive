#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e;
    int bugermin = 2001;
    int drinkmin = 2001;

    cin >> a >> b >> c >> d >> e;

    if(bugermin > a) bugermin = a;

    if(bugermin > b) bugermin = b;

    if(bugermin > c) bugermin = c;

    if(drinkmin > d) drinkmin = d;

    if(drinkmin > e) drinkmin = e;

    cout << bugermin + drinkmin - 50;

    return 0;
}