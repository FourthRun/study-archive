#include <iostream>

using namespace std;

int main() {
    int res1, n;
    int res2 = 1;
    
    cin >> res1;


    for(int i = 2; i <= 9; ++i) {
        cin >> n;

        if(res1 < n) {
            res1 = n;
            res2 = i;
        }
    }

    cout << res1 << "\n" << res2;

    return 0;
}