#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int cnt = 0;
    string s;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s;

        cnt += s.size();
    }

    cout << cnt;

    return 0;
}