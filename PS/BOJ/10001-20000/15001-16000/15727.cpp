#include <iostream>

using namespace std;

int main() {
    int t;

    cin >> t;

    if(t % 5 == 0) cout << t / 5;
    else cout << t / 5 + 1;
    
    return 0;
}