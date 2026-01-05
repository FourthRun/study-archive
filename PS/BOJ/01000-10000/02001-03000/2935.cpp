#include <iostream>
#include <string>

using namespace std;

int main() {
    string num1, num2, calc;

    cin >> num1 >> calc >> num2;

    int count1 = num1.size() - 1;
    int count2 = num2.size() - 1;

    if(calc == "*") {
        cout << 1;

        for(int i = 0; i < count1 + count2; i++) {
            cout << 0;
        }   
    }
    else {
        if(count1 == count2) {
            num1[0] = '2';

            cout << num1;
        }
        else if(count1 > count2) {
            num1[num1.size() - count2 - 1] = '1';

            cout << num1;
        } 
        else {
            num2[num2.size() - count1 - 1] = '1';

            cout << num2;
        }
    }

    return 0;
}