#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string name, state;
    set<string, greater<string>> worker;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> name >> state;

        if(state == "enter") {
            worker.insert(name);
        }
        else {
            worker.erase(name);
        }
    }

    for(string s : worker) {
        cout << s << "\n";
    }

    return 0;
}