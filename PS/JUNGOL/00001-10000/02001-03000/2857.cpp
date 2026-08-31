#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<vector<char>> v(5, vector<char>(15));
    string s;

    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 15; ++j) {
            v[i][j] = '.';
        }
    }

    for(int i = 0; i < 5; ++i) {
        cin >> s;

        for(int j = 0; j < s.size(); ++j) {
            v[i][j] = s[j];
        }
    }

    for(int i = 0; i < 15; ++i) {
        for(int j = 0; j < 5; ++j) {
            if(v[j][i] != '.') cout << v[j][i];
        }
    }

    return 0;
}