#include <iostream>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    if(n < m) {
        for(int i = n; i <= m; ++i) {
            for(int j = 1; j <= 9; ++j) {
                cout << i << " * " << j << " = ";
                
                if(i * j <= 9) cout << " ";

                cout << i * j << "   ";

                if(j % 3 == 0) cout << "\n";
            }

            cout << "\n";
        }
    }
    else {
        for(int i = n; i >= m; --i) {
            for(int j = 1; j <= 9; ++j) {
                cout << i << " * " << j << " = ";
                
                if(i * j <= 9) cout << " ";

                cout << i * j << "   ";

                if(j % 3 == 0) cout << "\n";
            }

            cout << "\n";
        } 
    }
    
    return 0;
}