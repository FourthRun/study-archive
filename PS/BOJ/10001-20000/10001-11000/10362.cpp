#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>

int arr[65][65] = {0, };

using namespace std;

int main() {
    int n, x, y, sum, direction;
    string s;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        sum = 0;
        direction = 0;

        cin >> x >> y >> s;

        arr[x][y]++;

        for(char c : s) {
            if(c == 'F') {
                if(direction == 1) x++;
                else if(direction == 2) y--;
                else if(direction == 3) x--;
                else y++;
                
                arr[x][y]++;
            }
            else if(c == 'R') {
                direction++;

                direction %= 4;
            }
            else if(c == 'L') {
                direction--;

                if(direction == -1) direction = 3;
            }
        }

        for(int i = 0; i < 65; i++) {
            for(int j = 0; j < 65; j++) {
                if(arr[i][j] > 1) sum++;
                arr[i][j] = 0;
            }
        }

        cout << "Case #" << i << ": " << x << " " << y << " " << sum << "\n";
    }

    return 0;
}