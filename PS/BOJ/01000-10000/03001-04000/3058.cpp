#include <iostream>

using namespace std;

int main() {
    int t, num;
    int min = 101;
    int sum = 0;

    cin >> t;

    for(int i = 0; i < t; i++) {
        sum = 0;
        min = 101;

        for(int j = 0; j < 7; j++) {
            cin >> num;

            if(num % 2 == 0) {
                sum +=  num;

                if(min > num) min = num;
            }            
        }

        cout << sum << " " << min << "\n";
    }

    return 0;
}