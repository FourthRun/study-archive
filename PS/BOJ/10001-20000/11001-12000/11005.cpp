#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, base, t;
    string s = "";

    cin >> n >> base;


    while(n > 0) {
        t = n % base;
        
        n /= base;

        if(t < 10) s += (char)(t + '0');
        else s += char('A' + t - 10);
    }

    for(int i = s.size() - 1; i >= 0; i--) {
        cout << s[i];
    }

    return 0;
}