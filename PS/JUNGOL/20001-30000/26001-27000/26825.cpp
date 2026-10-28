#include <iostream>
#include <string>

using namespace std;

long long store[100001];

int main() {
    string s;
    long long N = 1e9 + 7;
    long long res = 0;

    store[0] = 1;

    for(int i = 1; i < 100000; ++i) {
        store[i] = (store[i - 1] * 2) % N;
    }

    cin >> s;

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == 'O') res = (res + store[i]) % N; 
    }

    cout << res;

    return 0;
}