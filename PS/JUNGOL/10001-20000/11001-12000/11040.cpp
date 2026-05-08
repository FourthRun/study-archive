#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string s;
    double h = 0;
    double g = 0;

    getline(cin, s);

    for(char c : s) {
        if(c == 'H') ++h;
        else if(c == 'P') ++h;
        else if(c == 'Y') ++h;
        else if(c == 'S') ++g;
        else if(c == 'D') ++g;
        else if(c == 'A') {
            ++h;
            ++g;
        }
    }

    if(h == 0 && g == 0) cout << "50.00";
    else cout << fixed << setprecision(2) << h / (h + g) * 100;

    return 0;
}