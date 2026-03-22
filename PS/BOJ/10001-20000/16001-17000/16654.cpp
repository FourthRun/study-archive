#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    string sum;
    int cnt = 0;
    bool blank = true;
    bool result = true;
    bool check;

    cin >> s;

    for(int i = 0; i < s.size(); i += 2) {
        if(blank) {
            if(s[i] == '<') check = true;
            else check = false;

            blank = false;
            sum += '[';
            ++cnt;
        }
        else if(s[i] == '<') {
            if(check) {
                sum += '[';
                ++cnt;
            }
            else {
                sum += ']';
                --cnt;
            }
        }
        else {
            if(check) {
                sum += ']';
                --cnt;
            }
            else {
                sum += '[';
                ++cnt;
            }
        }

        if(cnt == 0) blank = true;
        else if(cnt < 0) {
            result = false;

            break;
        }
    }

    if(result && cnt == 0) cout << sum;
    else cout << "Keine Loesung";

    return 0;
}