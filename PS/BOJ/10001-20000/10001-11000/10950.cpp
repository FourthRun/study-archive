#include <iostream>

using namespace std;

int main() {
    int maxNum, num1, num2;

    cin >> maxNum;

    for(int i = 1; i <= maxNum; i++){
        cin >> num1 >> num2;
        cout << num1 + num2 << "\n";
    }

    return 0;
}