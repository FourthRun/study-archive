#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int count;
    bool check;

    while(cin >> n) {
        if(n == 0) break;

        count = 0;

        for(int i = n + 1; i <= 2 * n; i++) {
            check = true;

            if(i != 1) {
                for(int j = 2; j * j <= i; j++) {
                    if(i % j == 0) {
                        check = false;

                        break;
                    }
                }
            }

            if(check) count++; 
        }

        cout << count << "\n";
    }

    return 0;
}