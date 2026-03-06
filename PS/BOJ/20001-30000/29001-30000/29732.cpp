#include <iostream>
#include <string>

bool arr[10001];

using namespace std;

int main() {
    int n, m, k;
    int cnt = 0;
    string s;

    cin >> n >> m >> k >> s;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'R') {
            for(int j = i - k; j <= i + k; j++) {
                if(j >= 0 &&  j < n) {
                    arr[j] = true;
                }
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(arr[i]) cnt++;
    }

    if(cnt > m) cout << "No";
    else cout << "Yes";

    return 0;
}