#include <iostream>

using namespace std;

int main() {
    int m, d;
    int sum = 0;

    cin >> m >> d;

    for(int i = 2; i <= m; i++) {
        if(i % 2 == 1 && i > 8) sum += 31;
        else if(i == 3) sum += 28;
        else if(i % 2 == 0 && i < 9) sum += 31;
        else sum += 30;
    }

    sum += d;

    sum %= 7;

    if(sum == 1) cout << "MON";
    else if(sum == 2) cout << "TUE";
    else if(sum == 3) cout << "WED";
    else if(sum == 4) cout << "THU";
    else if(sum == 5) cout << "FRI";
    else if(sum == 6) cout << "SAT";
    else if(sum == 0) cout << "SUN";

    return 0;
}