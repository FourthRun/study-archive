#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, price, pen;
    int cnt = 0;
    bool check;

    while(cin >> n) {
        ++cnt;
        check = true;

        if(n == 0) break;
        else {
            cout << "Case " << cnt << ":\n";
            cout << n << " pencils for " << n << " cents\n";

            price = n * 100;
            pen = n;

            for(int i = 1; i <= pen; ++i) {
                for(int j = 1; i + j < pen; ++j) {
                    if(i * 400 + j * 50 + (pen - i - j) * 25 == price) {
                        check = false;

                        cout << i << " at four cents each\n";
                        cout << j << " at two for a penny\n";
                        cout << pen - i - j << " at four for a penny\n\n";
                    }
                }
            }

            if(check) cout << "No solution found.\n\n";
        }
    }

    return 0;
}