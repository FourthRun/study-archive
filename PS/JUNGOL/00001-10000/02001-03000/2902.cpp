#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    int sum = 0;
    bool check = false;

    cin >> s;

    for(int i = 0; i < s.size(); ++i) {
        sum += s[i] - '0';
        
        if(s[i] == '0') check = true;
    }

    sort(s.begin(), s.end(), greater<>());

    if(sum % 3 == 0 && check) cout << s;
    else cout << -1;

    return 0;
}