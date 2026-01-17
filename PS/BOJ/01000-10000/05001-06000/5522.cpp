#include <iostream>

using namespace std;

int main() {
    long long num;
    long long count = 0;

    for(int i = 0; i < 5; i++) {
        cin >> num;
        
        count += num;
    }

    cout << count;

    return 0;
}