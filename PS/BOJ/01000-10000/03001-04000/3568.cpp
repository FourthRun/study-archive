#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, temp;
    string s;
    string pre;

    cin >> pre;

    while(cin >> s) {
        temp = 1;

        cout << pre;

        for(int i = s.size() - 2; i >= 0; i--) {
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
                temp = i + 1;

                break;
            }
            else if(s[i] == ']') {
                cout << "[]";

                --i;
            }
            else cout << s[i];
        }

        cout << " ";

        for(int i = 0; i < temp; i++) {
            cout << s[i];
        }

        cout << ";\n";
    }

    return 0;
}