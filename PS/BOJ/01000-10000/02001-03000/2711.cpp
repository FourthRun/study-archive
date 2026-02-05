#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
    int t;
    pair<int, string> p;

    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> p.first >> p.second;

        p.second.erase(p.second.begin() + p.first - 1);

        cout << p.second << "\n";
    }

    return 0;
}