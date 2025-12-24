#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;

    cin >> t;

    for(int i = 0; i < t; i++) {
        string s;
        int count = 0;
        int temp = 0;

        cin >> s;

        for(char c : s) {
            if(c == 'O') {
                temp++;
                count += temp;
            }
            else {
                temp = 0;
            }
        }

        cout << count << "\n";
    }

    return 0;
}