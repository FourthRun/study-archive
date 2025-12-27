#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, m;
    string s;
    int num = 32;
    int startW = 0;
    int startB = 0;

    cin >> n >> m;
    
    vector<vector<bool>> v(n, vector<bool>(m));

    for(int i = 0; i < n; i++) {
        cin >> s;

        for(int j = 0; j < m; j++) {
            if(s[j] == 'W') v[i][j] = true;
            else v[i][j] = false;
        }
    }

    for(int k = 0; k < n - 7; k++) {
        for(int l = 0; l < m - 7; l++) {
            for(int i = k; i < k + 8; i++) {
                for(int j = l; j < l + 8; j++) {
                    if((i + j) % 2 == 0) {
                        if(v[i][j] == true) startW++;
                        else startB++;
                    }

                    if((i + j) % 2 == 1) {
                        if(v[i][j] == false) startW++;
                        else startB++;
                    }
                }
            }

            if(startW < num) num = startW;
            
            if(startB < num) num = startB;
                    
            startW = 0;
            startB = 0;
        }
    }

    cout << num;

    return 0;
}