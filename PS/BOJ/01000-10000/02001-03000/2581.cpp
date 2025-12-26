#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    int sum = 0;
    int min = -1;
    
    cin >> num1 >> num2;

    for(int i = num1; i <= num2; i++) {
        bool check = true;

        if(i < 2) check = false;

        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                check = false;
                break;
            }
        }

        if(check) {
            sum += i;
            if(min == -1) min = i;
        }
    }

    if(sum != 0) cout << sum << "\n" << min;
    else cout << -1;

    return 0;
}