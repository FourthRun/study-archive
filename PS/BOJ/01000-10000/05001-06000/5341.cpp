#include <iostream>

using namespace std;

int main() {
    int n;

    while(cin >> n) {
        int count = 0;

        if(n == 0) break;
        else {
            for(int i = 1; i <= n; i++) {
                count += i;
            }

            cout << count << "\n";
        } 
    }

    return 0;
}