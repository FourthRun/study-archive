#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, sex, old, agree;
    vector<int> v;

    cin >> t;

    for(int i = 1; i <= t; ++i) {
        cin >> sex >> old >> agree;

        if(sex == 2 || old < 17 || old > 40 || (old < 19 && agree == 0)) {
            v.push_back(i);
        }
    }

    cout << v.size() << "\n";

    for(int i : v) {
        cout << i << " ";
    }

    return 0;
}