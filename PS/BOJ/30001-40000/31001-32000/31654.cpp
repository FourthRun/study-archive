#include <iostream>

using namespace std;

int main() {
    int num1, num2, sum;

    cin >> num1 >> num2 >> sum;

    if(num1 + num2 == sum) cout << "correct!";
    else cout << "wrong!";

    return 0;
}