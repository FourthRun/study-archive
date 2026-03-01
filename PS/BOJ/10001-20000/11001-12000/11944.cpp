#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, result;
    int n, m;
    bool check = false;

    cin >> n >> m;

    s =  to_string(n);

    for(int i = 0; i < n; i++) {
        for(char c : s) {
            result += c;

            if(result.size() == m) {
                check = true;

                break;
            }
        }

        if(check) break;
    }

    cout << result;

    return 0;
}