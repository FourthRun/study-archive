#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    string num;
    int res = 0;
    bool calc = true;

    cin >> s;

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] >= '0' && s[i] <= '10') num += s[i];
        else {
            if(calc) res += stoi(num);
            else res -= stoi(num);

            if(s[i] == '-') calc = false;

            num = "";
        }
    }

    if(calc) res += stoi(num);
    else res -= stoi(num);

    cout << res;

    return 0;
}