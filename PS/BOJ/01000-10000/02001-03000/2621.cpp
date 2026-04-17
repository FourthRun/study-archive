#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
    int res, n;
    bool check = false;

    vector<int> ac(4);
    vector<int> ai(10);
    vector<pair<int, char>> v(5);

    for(int i = 0; i < 5; ++i) {
        cin >> v[i].second >> v[i].first;

        if(v[i].second == 'R') ++ac[0];
        else if(v[i].second == 'B') ++ac[1];
        else if(v[i].second == 'Y') ++ac[2];
        else if(v[i].second == 'G') ++ac[3];

        ++ai[v[i].first];
    }
    
    sort(v.begin(), v.end());

    auto it = max_element(ai.begin(), ai.end());
    
    if(ac[0] == 5 || ac[1] == 5 || ac[2] == 5 || ac[3] == 5) {
        if(v[4].first - v[0].first == 4 && v[3].first - v[1].first == 2 && v[3].first - v[2].first == 1) res = 900 + v[4].first; // 1. 카드 5장 색 모두 똑같음 + 연속적
        else res = 600 + v[4].first; // 4. 5장 색 같음
    } 
    else if(*it == 4) res = 800 + it - ai.begin(); // 2. 4장 숫자 같음
    else if(*it == 3) {
        for(int i = 1; i < 10; ++i) {
            if(ai[i] == 2) {
                check = true;

                n = i;

                break;
            }
        }

        if(check) res = 700 + 10 * (it - ai.begin()) + n; // 3. 3장 숫자 같음 나머지 2장 숫자 같음
        else res = 400 + it - ai.begin(); // 6. 3장 숫자 같음
    }
    else if(v[4].first - v[0].first == 4 && v[3].first - v[1].first == 2 && v[3].first - v[2].first == 1) res = 500 + v[4].first; // 5. 5장 숫자 연속적
    else if(*it == 2) {
        for(int i = it - ai.begin() + 1; i < 10; ++i) {
            if(ai[i] == 2) {
                check = true;

                n = i;

                break;
            }
        }

        if(check) res = 300 + 10 * n + it - ai.begin(); // 7. 2장 숫자 같음, 다른 2장 숫자 같음
        else res = 200 + it - ai.begin(); // 8. 2장 숫자 같음
    }
    else res = 100 + v[4].first;

    cout << res;

    return 0;
}