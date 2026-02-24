#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n1, n2, n3;
    string s1, s2, s3, s4;

    cin >> s1 >> s2;

    if(s1.size() > s2.size()) swap(s1, s2);

    n1 = s1.size();
    n2 = s2.size();

    n3 = n1 * n2 * gcd(n1, n2);

    for(int i = 0; i < n3 / n1; i++) {
        s3 += s1;
    }

    for(int i = 0; i < n3 / n2; i++) {
        s4 += s2;
    }

    if(s3 == s4) cout << 1;
    else cout << 0;

    return 0;
}