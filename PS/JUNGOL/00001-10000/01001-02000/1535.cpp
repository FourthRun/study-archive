#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string s, res, temp;
    set<string> wordset;
    int idx;

    while(getline(cin, s)) {
        if(s == "END") break;

        idx = 0;

        for(int i = 1; i < s.size(); ++i) {
            if(s[i] == ' ') {
                temp = s.substr(idx, i - idx);

                idx = i + 1;

                if(!wordset.count(temp)) res += (temp + " ");

                wordset.insert(temp);
            }
        }

        temp = s.substr(idx, s.size() - idx);

        if(!wordset.count(temp)) res += (temp + " ");

        wordset.insert(temp);

        cout << res << "\n";
    }

    return 0;
}