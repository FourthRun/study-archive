#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k, c, r, l;
    long long stardust = 0;
    long long nowp = 0;
    long long combo = 0;
    bool check = true;

    cin >> n >> k >> c >> r;

    vector<long long> base(k + 1);
    vector<long long> s(k + 1);
    vector<long long> skill(k + 1);
    vector<long long> p(k + 1);

    for(int i = 1; i <= k; i++) {
        cin >> base[i];
    }
    
    for(int i = 1; i <= k; i++) {
        cin >> s[i];
    }

    for(int i = 1; i <= k; i++) {
        cin >> p[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> l;

        if(l == 0) {
            if(nowp - r >= 0) nowp -= r;
            else nowp = 0;

            combo = 0;
        }
        else {
            stardust += base[l] * (100 + combo * c) * (100 + skill[l] * s[l]) / 10000;

            nowp += p[l];
            ++combo;
            ++skill[l];
            
            if(nowp > 100) check = false;
        }
    }

    if(check) cout << stardust;
    else cout << -1;

    return 0;
}