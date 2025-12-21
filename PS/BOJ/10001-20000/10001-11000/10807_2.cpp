#include <iostream>

using namespace std;

int main() {
    int freq[201] = {};
    int count, num, checkNum;

    cin >> count;

    for(int i = 0; i < count; i++) {
        cin >> num;
        freq[num + 100]++;
    }

    cin >> checkNum;

    cout << freq[checkNum + 100];

    return 0;
}