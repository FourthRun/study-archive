#include <iostream>

using namespace std;

long long coin[6][4];

int main() {
    int n;
    int num = 0;
    int cnt = 0;

    cin >> n;

    coin[0][1] = 500;
    coin[1][1] = 100;
    coin[2][1] = 50;
    coin[3][1] = 10;
    coin[4][1] = 5;
    coin[5][1] = 1;

    for(int i = 0; i < 6; ++i) {
        cin >> coin[i][0];

        num += coin[i][0] * coin[i][1];
    }

    num -= n;

    for(int i = 0; i < 6; ++i) {
        if(num >= coin[i][0] * coin[i][1]) coin[i][2] = coin[i][0];
        else coin[i][2] = num / coin[i][1];
        

        num -= coin[i][2] * coin[i][1];
    }
    

    for(int i = 0; i < 6; ++i) {
        coin[i][3] = coin[i][0] - coin[i][2];

        cnt += coin[i][3];
    }

    cout << cnt << "\n";

    for(int i = 0; i < 6; ++i) {
        cout << coin[i][3] << " ";
    }

    return 0;
}