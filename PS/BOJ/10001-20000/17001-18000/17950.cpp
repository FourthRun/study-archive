#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h, x, num;
    long long snowball = 1;
    long long count = 0;

    cin >> h >> x;

    for(int i = 1; i <= h; i++) {
        cin >> num;

        snowball = (snowball * x) % 1000000007;
        
        count += (snowball * num) % 1000000007;
    }

    cout << count;

    return 0;
}