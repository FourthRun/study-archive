#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k, temp, nx, ny;
    int x = 0;
    int y = 0;
    bool check = false;
    string s;

    cin >> n >> k >> s;

    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; ++i) {
        if(s[i] == 'U') ++y;
        else if(s[i] == 'D') --y;
        else if(s[i] == 'R') ++x;
        else if(s[i] == 'L') --x;

        v[i] = {x, y};
    }

    if(x == 0 && y == 0) check = true;
    else {
        for(int i = 0; i < n; ++i) {
            nx = -v[i].first;
            ny = -v[i].second;

            if(x != 0 && y != 0) {
                if(nx % x == 0 && ny % y == 0) {
                    if(nx / x == ny / y) {
                        temp = nx / x;

                        if(temp >= 0 && temp < k) check = true;
                    }
                }
            }
            else if(x == 0) {
                if(nx == 0 && ny % y == 0) {
                    temp = ny / y;

                    if(temp >= 0 && temp < k) check = true;
                }
            }
            else {
                if(nx % x == 0 && ny == 0) {
                    temp = nx / x;

                    if(temp >= 0 && temp < k) check = true;
                }
            }
        }
    }
    
    if(check) cout << "YES";
    else cout << "NO";

    return 0;
}