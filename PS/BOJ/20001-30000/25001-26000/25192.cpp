#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int count = 0;
    string s;
    set<string> nickName;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s;

        if(s == "ENTER") {
            count += nickName.size();

            nickName.clear();
        }
        else nickName.insert(s);
    }

    count += nickName.size();

    cout << count;

    return 0;
}