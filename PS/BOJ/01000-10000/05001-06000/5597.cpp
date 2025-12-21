#include <iostream>

using namespace std;

bool arr[30];

int main() {
    int num;
    int count = 0;

    for(int i = 0; i < 28; i++) {
        cin >> num;
        arr[num - 1] = true;
    }

    for(int i = 0; i < 30; i++) {
        if(arr[i] == 0) {
            cout << i + 1 << "\n";
        }
    }

    return 0;
}