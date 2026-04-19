#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, index, summind, maxmind;
    int min = 10000000;
    char c;
    string s;

    cin >> n >> m;

    vector<int> vi(m);
    vector<int> temp(m);
    vector<pair<char, string>> vs(n);
    

    for(int i = 0; i < n; ++i) {
        cin >> c >> s;

        vs[i] = {c, s};

        if(c == 'L') {
            for(int j = 0; j < m; ++j) {
                if(s[j] == '1') --vi[j];
            }
        } 
        else {
            for(int j = 0; j < m; ++j) {
                if(s[j] == '1') ++vi[j];
            }
        }
    }

    for(int i = 0; i < n; ++i) {
        temp = vi;
        summind = 0;
        maxmind = 0;

        if(vs[i].first == 'R') {
            for(int j = 0; j < m; ++j) {
                if(vs[i].second[j] == '1') --temp[j];
            }
        } 
        else {
            for(int j = 0; j < m; ++j) {
                if(vs[i].second[j] == '1') ++temp[j];
            }
        }

        for(int j : temp) {
            summind += j;

            if(maxmind < abs(summind)) maxmind = abs(summind);
        }

        if(min > maxmind) {
            min = maxmind;

            index = i + 1;
        }
    }

    cout << index << "\n" << min;

    return 0;
}