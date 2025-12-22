#include <iostream>

bool check[110][110];

using namespace std;

int main() {
    int num, x, y;
    int count = 0;

    cin >> num;

    for(int i = 0; i < num; i++) {
        cin >> x >> y;

        for(int a = x; a < x + 10; a++) {
            for(int b = y; b < y + 10; b++) {
                check[a][b] = true;
            }
        }
    }

    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            if(check[i][j]) count++;
        }
    }

    cout << count;

    return 0;
}