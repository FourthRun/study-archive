#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n1, n2;
    string s1, s2, result;
    bool check = false;

    cin >> s1 >> s2;

    if(s1.size() < s2.size()) swap(s1, s2);

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    for(int i = 0; i < s2.size(); i++) {
        n1 = s1[i] - '0';
        n2 = s2[i] - '0';

        if(n1 + n2 + check >= 10) {
            result += char((n1 + n2 + check) % 10 + '0');
            check = true;
        }
        else {
            result += char(n1 + n2 + check + '0');
            check = false;            
        }
    }

    if(s1.size() != s2.size()) {
        for(int i = s2.size(); i < s1.size(); i++) {
            n1 = s1[i] - '0';

            if(n1 + check >= 10) {
                result += char((n1 + check) % 10 + '0');
                check = true;
            }
            else {
                result += char(n1 + check + '0');
                check = false;
            }
        }

        if(check) result += '1';
    }
    else if(check) result += '1';
    
    reverse(result.begin(), result.end());

    cout << result;

    return 0;
}