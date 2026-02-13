#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int h1, h2, m1, m2, s1, s2, h, m, s;
    string st1, st2, result;

    cin >> st1 >> st2;

    h1 = stoi(st1.substr(0, 2));
    h2 = stoi(st2.substr(0, 2));
    m1 = stoi(st1.substr(3, 2));
    m2 = stoi(st2.substr(3, 2));
    s1 = stoi(st1.substr(6, 2));
    s2 = stoi(st2.substr(6, 2));

    s = (60 + s2 - s1) % 60;

    if(s2 - s1 < 0) {
        m = (59 + m2 - m1) % 60;

        if(m2 - m1 - 1 < 0) h = (23 + h2 - h1) % 24;
        else h = (24 + h2 - h1) % 24;
    }
    else {
        m = (60 + m2 - m1) % 60;

        if(m2 - m1 < 0) h = (23 + h2 - h1) % 24;
        else h = (24 + h2 - h1) % 24;
    }

    if(h < 10) result += "0" + to_string(h) + ":";
    else result += to_string(h) + ":";

    if(m < 10) result += "0" + to_string(m) + ":";
    else result += to_string(m) + ":";

    if(s < 10) result += "0" + to_string(s);
    else result += to_string(s);

    cout << result;

    return 0;
}