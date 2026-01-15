#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int num;
    int count = 0;
    bool weight = true; // true = 1, false = 3
    bool special;

    cin >> s;

    for(char c : s) {
        if(c == '*') {
            special = weight;

            weight = !weight;
        }
        else if(weight == true) {
            num = c - '0';

            weight = !weight;

            count += num % 10;
        }
        else {          
            num = c - '0';

            count += num * 3 % 10;

            weight = !weight;
        }
    }

    if(special) cout << (10 - (count % 10)) % 10;
    else {
        num = 10 - count % 10;

        if(num % 3 == 0) cout << num;
        else if((num + 10) % 3 == 0) cout << (num + 10) / 3;
        else cout << (num + 20) / 3;
    }

    return 0;
}