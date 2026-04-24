#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    long long res;
    string s;

    cin >> t;

    while(t--) {
        map<char, int> m;
        map<char, int> add;
        res = 0;

        cin >> n >> s;

        for(int i = 0; i < s.size(); ++i) {
            m[s[i]] = i;

            ++add[s[i]];
        }

        for(int i = 0; i < s.size(); ++i) {
            --add[s[i]];

            res += m[s[i]] - i - add[s[i]];          
        }

        cout << res * 5 << "\n";
    }

    return 0;
}