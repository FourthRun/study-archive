#include <iostream>
#include <string>

using namespace std;

int main() {
    int x, y, z, nextNum;
    string a, b, c;

    cin >> a >> b >> c;

    if(a[0] >= '0' && a[0] <= '9') {
        x = stoi(a);

        nextNum = x + 3;
    }
    else if(b[0] >= '0' && b[0] <= '9') {
        y = stoi(b);

        nextNum = y + 2;
    }
    else if(c[0] >= '0' && c[0] <= '9') {
        z = stoi(c);

        nextNum = z + 1;
    }

    if(nextNum % 5 == 0 && nextNum % 3 == 0) {
        cout << "FizzBuzz";
    }
    else if(nextNum % 5 == 0) {
        cout << "Buzz";
    }
    else if(nextNum % 3 == 0) {
        cout << "Fizz";
    }
    else cout << nextNum;
    
    return 0;
}