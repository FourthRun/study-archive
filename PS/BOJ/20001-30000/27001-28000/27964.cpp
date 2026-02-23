#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int n;
    string s;
    set<string> cheese;

    cin >> n;

    while(n--) {
        cin >> s;

        if(s.size() >= 6) {
           if(s.substr(s.size() - 6, 6) == "Cheese") cheese.insert(s); 
        }
    }

    if(cheese.size() >= 4) cout << "yummy";
    else cout << "sad";

    return 0;
}