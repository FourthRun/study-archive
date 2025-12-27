#include <iostream>

using namespace std;

int main() {
    int n;
    int x = -1;
    int y;
    bool check = false;

    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(3 * i + 5 * j == n) {
                x = i;
                y = j;
                check = true;

                break;
            }
        }
        
        if(check) break;
    }

    if(x == -1) cout << -1;
    else cout << x + y;

    return 0;
}