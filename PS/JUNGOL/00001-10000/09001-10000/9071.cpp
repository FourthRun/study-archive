#include <iostream>

using namespace std;

int main() {
    int num;
    int max = -10000;
    int min = 10000;

    for(int i = 0; i < 10; ++i) {
        cin >> num;

        if(num > max && num % 2 == 0) max = num;
        
        if(num < min && (num % 2 == 1 || num % 2 == -1)) min = num;
    }

    cout << min << " " << max;

    return 0;
}