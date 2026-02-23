#include <iostream>

using namespace std;

int main() {
    int a, b, c, m;
    int state = 0;
    int work = 0;
    int h = 24;

    cin >> a >> b >> c >> m;

    while(h--) {
        if(state + a <= m) {
            state += a;
            work += b;
        }
        else state -= c;

        if(state < 0) state = 0;
    }

    cout << work;

    return 0;
}