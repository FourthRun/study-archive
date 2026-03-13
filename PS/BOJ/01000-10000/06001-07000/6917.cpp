#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int idx;
    bool check;
    char arr[] = {'a', 'e', 'i', 'o', 'u', 'y'};

    while(cin >> s) {
        check = true;

        if(s == "quit!") break;
        else if(s.size() < 4) cout << s << "\n";
        else if(s.substr(s.size() -2, 2) == "or") {
            for(int i = 0; i < 6; i++) {
                if(s[s.size() - 3] == arr[i]) {
                    cout << s << "\n";

                    check = false;

                    break;
                }
            }
            
            if(check) {
                cout << s.substr(0, s.size() - 1) << "ur" << "\n"; 
            }
        }
        else cout << s << "\n";
    }

    return 0;
}