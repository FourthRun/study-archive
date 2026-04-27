#include <iostream>
#include <string>

using namespace std;

void calc(int i, int j, int num) {
    if((i / num) % 3 == 1 && (j / num) % 3 == 1) cout << " ";
    else if(num / 3 == 0) cout << "*";
    else calc(i, j, num / 3);
}

int main() {
    int n;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            calc(i, j, n);
        }

        cout << "\n";
    }

    return 0;
}