#include <iostream>

using namespace std;

char arr[10];

int main() {
    for(int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }

    cout << arr[0] << " " << arr[3] << " " << arr[6];
    
    return 0;
}