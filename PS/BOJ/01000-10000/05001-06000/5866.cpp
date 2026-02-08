#include <iostream>

int arrB[1000001];
int arrE[1000001];

using namespace std;

int main() {
    int b, e, distance, xj, yj;
    int x = 1;
    int y = 1;
    int result = 0;
    char direction;

    cin >> b >> e;

    for(int i = 0; i < b; i++) {
        xj = x;

        cin >> distance >> direction;

        for(int j = 0 + xj; j < distance + xj; j++) {
            if(direction == 'L') arrB[j] = arrB[j - 1] - 1;
            else if(direction == 'R') arrB[j] = arrB[j - 1] + 1;

            x++;
        }
    }

    for(int i = 0; i < e; i++) {
        yj = y;

        cin >> distance >> direction;

        for(int j = 0 + yj; j < distance + yj; j++) {
            if(direction == 'L') arrE[j] = arrE[j - 1] - 1;
            else if(direction == 'R') arrE[j] = arrE[j - 1] + 1;

            y++;
        }
    }

    for(int i = 1; i < max(x, y); i++) {
        if(i > x) {
            if(arrB[x - 1] == arrE[i]) result++;
        }
        else if(i > y) {
            if(arrB[i] == arrE[y - 1]) result++;
        }
        else if(arrB[i] == arrE[i] && arrB[i - 1] != arrE[i - 1]) result++;
    }

    cout << result;

    return 0;
}