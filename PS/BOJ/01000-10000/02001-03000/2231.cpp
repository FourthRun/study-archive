#include <iostream>

using namespace std;

int main() {
    int n;
    int m = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int t = i;
        int sum = i;

        while(t > 0) {
            sum += t % 10;
            t /= 10;
        }

        if(sum == n) {
            m = i;
            break;
        }
    }

    cout << m;

    return 0;
}