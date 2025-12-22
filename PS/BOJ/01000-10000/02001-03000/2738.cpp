#include <iostream>

using namespace std;

int arr[100][100];

int main() {
    int num1, num2, num3;

    cin >> num1 >> num2;

    for(int i = 0; i < num1; i++) {
        for(int j = 0; j < num2; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < num1; i++) {
        for(int j = 0; j < num2; j++) {
            cin >> num3;
            cout << arr[i][j] + num3 << " ";
        }

        cout << "\n";
    }

    return 0;
}