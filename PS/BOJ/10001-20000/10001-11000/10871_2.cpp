#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int size, checkNum;

    cin >> size >> checkNum;

    for(int i = 0; i < size; i++) {
        int num;
        cin >> num;

        if (num < checkNum) cout << num << " ";
    }

    return 0;
}