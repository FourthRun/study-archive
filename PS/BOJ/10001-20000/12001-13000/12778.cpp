#include <iostream>

using namespace std;

int main() {
    int t, m, tI;
    char type, tC;

    cin >> t;

    for(int i = 0; i < t; i++) {

        cin >> m >> type;

        if(type == 'C') {
            for(int j = 0; j < m; j++) {
                cin >> tC;
                
                cout << tC - 'A' + 1 << " ";
            }

            cout << "\n";
        }
        else {
            for(int j = 0; j < m; j++) {
                cin >> tI;

                cout << (char)('A' + tI - 1) << " ";
            }
            
            cout << "\n";
        }
    }

    return 0;
}