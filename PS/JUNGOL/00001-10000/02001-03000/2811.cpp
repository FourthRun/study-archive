#include <iostream>

using namespace std;

int main() {
    int num;
    bool check;

    for(int i = 0; i < 5; ++i) {
        check = false;
        cin >> num;

        for(int j = 2; j * j <= num; ++j) {
            if(num % j == 0) {
                check = true;

                break;
            }
        }

        if(num == 1) cout << "number one\n";
        else if(check) cout << "composite number\n";
        else cout << "prime number\n";
    }

    return 0;
}