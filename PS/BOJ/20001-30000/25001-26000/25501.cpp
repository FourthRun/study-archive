#include <iostream>
#include <string>

using namespace std;

int sum;

int recursion(const string& s, int l, int r) {
    sum++;

    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const string& s) {
    return recursion(s, 0, s.size() - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string s;
    
    cin >> t;

    for(int i = 0; i < t; i++) {
        sum = 0;

        cin >> s;

        cout << isPalindrome(s) << " " << sum << "\n";
    }

    return 0;
}