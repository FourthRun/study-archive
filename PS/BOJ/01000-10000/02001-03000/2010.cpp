#include <iostream>

using namespace std;

int main() {
    int n, num;
    int sum = 1;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;

        sum += num - 1;
    }

    cout << sum;

    return 0;
}