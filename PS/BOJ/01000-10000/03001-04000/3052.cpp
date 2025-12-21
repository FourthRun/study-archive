#include <iostream>

using namespace std;

bool arr[42] = {false, };

int main() {
    int num;
    int count = 0;

    for(int i = 0; i < 10; i++) {
        cin >> num;
        arr[num % 42] = true;
    }

    for(int i = 0; i < 42; i++) {
        if(arr[i]) {
            count++;
        }
    }
    
    cout << count;

    return 0;
}