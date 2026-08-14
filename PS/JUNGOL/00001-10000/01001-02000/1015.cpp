#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<string> b;
    stack<string> f;
    string s;
    string nowS = "http://www.acm.org/";

    while(cin >> s) {
        if(s == "QUIT") break;
        else if(s == "VISIT") {
            b.push(nowS);

            cin >> nowS;

            cout << nowS << "\n";

            while(!f.empty()) f.pop();
        }
        else if(s == "BACK") {
            if(b.empty()) cout << "Ignored\n";
            else {
                f.push(nowS);

                nowS = b.top();

                b.pop();

                cout << nowS << "\n";
            }
        }
        else if(s == "FORWARD") {
            if(f.empty()) cout << "Ignored\n";
            else {
                b.push(nowS);

                nowS = f.top();

                f.pop();

                cout << nowS << "\n";
            }
        }
    }

    return 0;
}