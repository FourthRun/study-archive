#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> v;
    string s;
    int cnt = 1;

    while(cin >> s) {
        if(cnt % 2 == 0) v.push_back(s);

        ++cnt;
    }

    for(int i = v.size() - 1; i >= 0; --i) {
        cout << v[i] << " ";
    }

    return 0;
}