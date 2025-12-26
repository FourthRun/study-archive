#include <iostream>

using namespace std;

int arr[10000] = {0, };

int main() {
    int num1, num2;
    int count = 0;

    cin >> num1 >> num2;

    for(int i = num1; 0 < i; i--) {
        if(num1 % i == 0) {
            arr[count] = num1 / i;
            count++;  
        }
    }

    cout << arr[num2 - 1];

    return 0;
}