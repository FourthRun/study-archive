#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    bool check = true;

    for(int i = 1; i <= 5; i++) {
        cin >> s;

        if(s.find("FBI") != string::npos) {
            cout << i << " ";

            check = false;
        }
    }

    if(check) cout << "HE GOT AWAY!";

    return 0;
}