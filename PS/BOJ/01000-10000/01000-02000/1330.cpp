#include <iostream>

using std::cout;
using std::cin;

int main() {
    int a, b;

    cin >> a >> b;

    if(a > b){
        cout << ">";
    }
    else if(a < b){
        cout << "<";
    }
    else {
        cout << "==";
    }

    return 0;
}