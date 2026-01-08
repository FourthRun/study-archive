#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string s;

    cin >> n;

    for(int i = 0; i < n; i++) {
        bool check = true;
        int count = 0;

        cin >> s;
        
        for(char c : s) {
            if(c == '(') count++;
            else count--;
            
            if(count < 0) {
                check = false;

                break;
            }
        }

        if(count != 0 || check == false) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}