#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    string s;
    set<int> setnum;

    cin >> m;

    while(m--) {
        cin >> s;

        if(s == "add") {
            cin >> n;

            setnum.insert(n);
        }
        else if(s == "remove") {
            cin >> n;
            
            setnum.erase(n);
        }
        else if(s == "check") {
            cin >> n;

            cout << setnum.count(n) << "\n";
        }
        else if(s == "toggle") {
            cin >> n;

            if(setnum.count(n)) setnum.erase(n);
            else setnum.insert(n);
        }
        else if(s == "all") {
            setnum = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
        }
        else if(s == "empty") setnum.clear();
    }

    return 0;
}