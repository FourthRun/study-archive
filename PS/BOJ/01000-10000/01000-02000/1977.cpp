#include <iostream>

using namespace std;

int main() {
    int a, b, min;
    int count = 0;

    cin >> a >> b;

    for(int i = b; i >= a; i--) {
        for(int j = 1; j <= 100; j++) {
            if(i == j * j) {
                count += j * j;

                min = j * j;
            }
            
        }
    }

    if(count) cout << count << "\n" << min;
    else cout << -1;

    return 0;
}