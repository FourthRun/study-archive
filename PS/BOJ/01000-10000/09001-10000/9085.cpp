#include <iostream>

using namespace std;

int main() {
    int t, n, num;

    cin >> t;

    for(int i = 0; i < t; i++) {
        int count = 0;

        cin >> n;

        for(int j = 0; j < n; j++) {
            cin >> num;

            count += num;
        }

        cout << count << "\n";
    }

    return 0;
}