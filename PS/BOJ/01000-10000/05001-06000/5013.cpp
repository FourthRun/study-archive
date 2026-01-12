#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int winCount = 0;
    string s;

    cin >> n;

    for(int i = 0; i < n; i++) {
        bool check = true;
        char checkChar = 'a';

        cin >> s;
        
        for(char c : s) {
            if(checkChar == 'C') {
                if(c == 'D') {
                    check = false;

                    break;
                }
                else checkChar = c;
            }
            else checkChar = c;
        }

        if(check) winCount++;
    }

    cout << winCount;

    return 0;
}