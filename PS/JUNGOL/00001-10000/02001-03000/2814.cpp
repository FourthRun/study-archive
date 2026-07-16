#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    long long pow = 1;
    long long res = 0;

    cin >> s;

    reverse(s.begin(), s.end());

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == '1') res += pow;

        pow *= 2;
    }

    cout << res;
    
    return 0;
}