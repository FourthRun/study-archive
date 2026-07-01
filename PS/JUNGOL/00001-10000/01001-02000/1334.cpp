#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> m;
    int md, num;
    int avg = 0;
    int cnt = 0;

    for(int i = 0; i < 10; ++i) {
        cin >> num;

        ++m[num];

        avg += num;
    }

    for(auto it : m) {
        if(it.second > cnt) {
            md = it.first;
            cnt = it.second;
        }
    }

    cout << avg / 10 << "\n" << md;

    return 0;
}