#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;

    cin >> num;

    for(int i = 1; i <= num; i++){
        cout << string(num - i, ' ');
        cout << string(i, '*') << "\n";
    }

    return 0;
}