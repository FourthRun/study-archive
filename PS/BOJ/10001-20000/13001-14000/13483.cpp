#include <iostream>

using namespace std;

int main() {
    int y, m, d, n, king, check;
    int min = 0;
    int result = -1;

    cin >> d >> m >> y;

    king = (y - 18) * 10000 + m * 100 + d;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> d >> m >> y;

        check = y * 10000 + m * 100 + d;

        if(check <= king && check > min)  {
            min = check;

            result = i;
        }
    }

    cout << result;

    return 0;
}