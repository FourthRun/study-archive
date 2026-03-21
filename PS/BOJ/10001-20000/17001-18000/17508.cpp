#include <iostream>
#include <string>

char arr[501][501];

using namespace std;

int main() {
    int n, m;
    int cntn, cntm;
    int sum = 0;
    bool check = false;
    string s;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> s;

        for(int j = 0; j < m; j++) {
            arr[i][j] = s[j];
        }
    }

    if(n % 2 == 0) cntn = n / 2;
    else cntn = n / 2 + 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == '8') {
                if(arr[n - 1 - i][m - 1 - j] != '8') {
                    sum = -1;
                    check = true;
                    
                    break;
                }
            }
            if(arr[i][j] == '6') {
                if(arr[n - 1 - i][m - 1 - j] == '9');
                else if(arr[n - 1 - i][m - 1 - j] == '6') ++sum;
                else {
                    sum = -1;
                    check = true;
                    
                    break;
                }
            }
            if(arr[i][j] == '9') {
                if(arr[n - 1 - i][m - 1 - j] == '6');
                else if(arr[n - 1 - i][m - 1 - j] == '9') ++sum;
                else {
                    sum = -1;
                    check = true;
                    
                    break;
                }
            }
            if(arr[i][j] == '7') {
                if(arr[n - 1 - i][m - 1 - j] == '7') ++sum;
                else {
                    sum = -1;
                    check = true;
                    
                    break;
                }
            }
        }

        if(check) break;
    }

    if(n % 2 == 1 && m % 2 == 1) {
        if(arr[n / 2][m / 2] != '8') sum = -1;
    }
    
    if(sum == -1) cout << sum;
    else cout << sum / 2;

    return 0;
}