#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    int e = 0;
    int w = 0;
    int s = 0;
    int n = 0;
    long long result;

    string figure;

    cin >> t >> figure;

    for(char c : figure) {
        if(c == 'E') ++e;
        else if(c == 'W') ++w;
        else if(c == 'S') ++s;
        else if(c == 'N') ++n;
    }

    cout << min({s + n + (2 * w), s + n + (2 * e), e + w + (2 * s), e + w + (2 * n)});

    return 0;
}