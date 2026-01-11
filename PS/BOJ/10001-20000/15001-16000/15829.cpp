#include <iostream>

using namespace std;

long long pow(int n) {
    long long count = 1;

    for(int i = 0; i < n; i++) {
        count *= 31;
        count %= 1234567891;
    }

    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l;
    int temp;
    long long hashCount = 0;
    char c;

    cin >> l;

    for(int i = 0; i < l; i++) {
        cin >> c;

        temp = (int)(c - 'a' + 1);

        hashCount = (hashCount +  (temp * pow(i))) % 1234567891;
    }

    cout << hashCount;

    return 0;
}