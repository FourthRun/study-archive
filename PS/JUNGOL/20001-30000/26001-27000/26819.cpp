#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int n;
    string s;
    set<string> cheese;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> s;

        if(s.size() < 6);
        else if(s.substr(s.size() - 6) == "Cheese") cheese.insert(s);
    }

    if(cheese.size() >= 4) cout << "yummy";
    else cout << "sad";

    return 0;
}