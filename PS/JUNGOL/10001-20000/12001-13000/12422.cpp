#include <iostream>

using namespace std;

int main() {
    int n, m;

    while(cin >> n >> m) {
        if(n < 2 || n > 9 || m < 2 || m > 9) cout << "INPUT ERROR!\n";
        else if(n < m) {
            for(int i = n; i <= m; ++i) {
                for(int j = 1; j <= 9; ++j) {
                    cout << i << " * " << j << " = " << i * j << "\n";
                }

                cout << "\n";
            }
        }
        else {
            for(int i = n; i >= m; --i) {
                for(int j = 1; j <= 9; ++j) {
                    cout << i << " * " << j << " = " << i * j << "\n";
                }

                cout << "\n";
            } 
        }
    }
    
    return 0;
}