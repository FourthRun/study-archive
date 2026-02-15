#include <iostream>

using namespace std;

int main() {
    int d, car;
    int sum = 0;

    cin >> d;

    for(int i = 0; i < 5; i++) {
        cin >> car;

        if(d == car) sum++;
    }

    cout << sum;

    return 0;
}