#include <iostream>

using namespace std;

int main() {
    int n, m;

    while(cin >> n >> m) {
        if(n < 2 || n > 9 || m < 2 || m > 9) cout << "INPUT ERROR!\n";
        else if(n < m) {
            for(int i = 1; i <= 9; ++i) {
                for(int j = n; j <= m; ++j) {
                    cout << j << " * " << i << " = ";

                    if(i * j <= 9) cout << " ";

                    cout << i * j;

                    if(j != m) cout << "   ";
                }

                cout << "\n";
            }
        }
        else {
            for(int i = 1; i <= 9; ++i) {
                for(int j = n; j >= m; --j) {
                    cout << j << " * " << i << " = ";

                    if(i * j <= 9) cout << " ";

                    cout << i * j;

                    if(j != m) cout << "   ";
                }

                cout << "\n";
            }
        }
    }
    
    return 0;
}