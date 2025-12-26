#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    int count = 0;
    int min = 0;
    

    cin >> num1 >> num2;

    for(int i = num1; i <= num2; i++) {
        bool check = true;

        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                check = false;
                break;
            }

            
        }
        
        if(check) {
            count += i;
            if(min == 0) min = i;
        }
    }

    if(count != 0) cout << count << "\n" << min;
    else cout << -1;

    // if ~ 있으면 count +=
    // else cout << -1;

    return 0;
}