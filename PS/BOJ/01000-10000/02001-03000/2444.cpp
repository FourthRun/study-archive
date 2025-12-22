#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    for(int i = 1; i <= num; i++) {
        for(int j = num - i; j > 0; j--) {
            cout << " ";
        }

        for(int j = 1; j <= i * 2 - 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    for(int i = num - 1; i > 0; i--) {
        for(int j = 0; j < num - i; j++) {
            cout << " ";
        }

        for(int j = 1; j <= i * 2 - 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}