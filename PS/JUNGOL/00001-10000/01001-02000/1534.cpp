#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    string s;

    cin >> n >> m;

    while(n > 0) {
        if(n % m > 9) s.push_back(n % m - 10 + 'A');
        else s.push_back(n % m + '0');

        n /= m;
    }

    reverse(s.begin(), s.end());

    cout << s;

    return 0;
}