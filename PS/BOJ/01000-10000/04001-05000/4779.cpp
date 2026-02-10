#include <iostream>
#include <string>

using namespace std;

string calc(string s) {
    string temp;

    if(s == "-") return "-";
    else {
        for(int i = 0; i < s.size() / 3; i++) {
            temp += " ";
        }

        return calc(s.substr(0, s.size() / 3)) + temp + calc(s.substr((s.size() * 2) / 3, s.size() / 3));
    }
}

int main() {
    int n, sum;
    string s, result;

    while(cin >> n) {
        sum = 1;
        s = "";

        for(int i = 0; i < n; i++) sum *=3;

        for(int i = 0; i < sum; i++) s += "-";

        result = calc(s);

        cout << result << "\n";
    }

    return 0;
}