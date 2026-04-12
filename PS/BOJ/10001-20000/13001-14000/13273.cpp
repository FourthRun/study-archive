#include <iostream>
#include <string>
#include <map>

using namespace std;

struct ntc {
    string one;
    string four;
    string five;
    string nine;
};

int main() {
    int t, n, digit, res;
    string s;
    map<int, ntc> m = {
        {1, {"I", "IV", "V", "IX"}},
        {2, {"X", "XL", "L", "XC"}},
        {3, {"C", "CD", "D", "CM"}}
    };

    cin >> t;

    for(int i = 0; i < t; ++i) {
        cin >> s;

        if(s[0] >= '0' && s[0] <= '9') {

            for(int j = 0; j < s.size(); ++j) {
                digit = s.size() - j;

                if(digit == 4) {
                    for(int k = 0; k < s[j] - '0'; ++k) {
                        cout << "M";
                    }
                }
                else {
                    if(s[j] == '9') cout << m[digit].nine;
                    else if(s[j] == '4') cout << m[digit].four;
                    else if(s[j] > '4') {
                        cout << m[digit].five;

                        for(int k = 0; k < s[j] - '5'; ++k) {
                            cout << m[digit].one;
                        }
                    }
                    else {
                        for(int k = 0; k < s[j] - '0'; ++k) {
                            cout << m[digit].one;
                        }
                    }
                }
            }
        }   
        else {
            res = 0;

            for(int j = 0; j < s.size(); ++j) {
                if(s[j] == 'I') {
                    if(s[j + 1] == 'V') {
                        res += 4;

                        ++j;
                    }
                    else if(s[j + 1] == 'X') {
                        res += 9;

                        ++j;
                    }
                    else res += 1;
                }
                else if(s[j] == 'X') {
                    if(s[j + 1] == 'L') {
                        res += 40;

                        ++j;
                    }
                    else if(s[j + 1] == 'C') {
                        res += 90;

                        ++j;
                    }
                    else res += 10;
                }
                else if(s[j] == 'C') {
                    if(s[j + 1] == 'D') {
                        res += 400;

                        ++j;
                    }
                    else if(s[j + 1] == 'M') {
                        res += 900;

                        ++j;
                    }
                    else res += 100;
                }
                else if(s[j] == 'M') res += 1000;
                else if(s[j] == 'V') res += 5;
                else if(s[j] == 'L') res += 50;
                else if(s[j] == 'D') res += 500;
            }

            cout << res;
        }

        cout << "\n";
    }

    return 0;
}