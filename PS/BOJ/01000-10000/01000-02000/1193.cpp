#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    int count = 0;

    cin >> n;

    while(n > 0) {
        m = n;
        n -= count;
        count++;
    }

    //cout << m;

    if(count % 2 == 0) cout << count - m << "/" << m;
    else cout << m << "/" << count - m;

   

    return 0;
}