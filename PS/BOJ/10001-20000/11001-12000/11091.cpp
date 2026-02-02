#include <iostream>
#include <string>
#include <cctype>

bool arr[26];

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s, check;

    cin >> n;

    cin.ignore();

    for(int i = 0; i < n; i++) {
        fill(arr, arr + 26, 0);
        check = "";

        getline(cin, s);

        for(char c : s) {
            if(c >= 'A' && c <= 'Z') arr[c - 'A'] = true;
            else if(c >= 'a' && c <= 'z') arr[c - 'a'] = true;
        }

        for(int i = 0; i < sizeof(arr); i++) {
            if(!arr[i]) {
                check += 'a' + i;
            }
        }

        if(check == "") cout << "pangram\n";
        else cout << "missing " << check << "\n";
    }

    return 0;
}