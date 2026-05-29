#include <iostream>

int arr[3][10];

using namespace std;

int main() {
    int a, b, c;
    bool check = true;

    for(int i = 0; i < 9; ++i) {
        cin >> a >> b >> c;

        if(a == 0);
        else if(arr[0][a] == 0) ++arr[0][a];
        else check = false;

        if(b == 0);
        else if(arr[1][b] == 0) ++arr[1][b];
        else check = false;

        if(c == 0);
        else if(arr[2][c] == 0) ++arr[2][c];
        else check = false;
    }

    if(check) cout << "YES";
    else cout << "NO";

    return 0;
}