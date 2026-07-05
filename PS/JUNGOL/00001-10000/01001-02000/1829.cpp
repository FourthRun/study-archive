#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v(7);
    int cnt = 0;
    int temp, remain;

    for(int i = 1; i <= 6; ++i) {
        cin >> v[i];
    }

    cnt += v[6];

    if(v[5] > 0) {
        cnt += v[5];

        v[1] -= min(v[5] * 11, v[1]);
    }

    if(v[4] > 0) {
        cnt += v[4];

        temp = v[4] * 5;
        
        if(temp <= v[2]) v[2] -= temp;
        else {
            temp -= v[2];

            v[2] = 0;

            temp *= 4;

            v[1] -= min(temp, v[1]);
        }
    }

    if(v[3] > 0) {
        cnt += v[3] / 4;

        remain = v[3] % 4;

        if(remain == 1) {
            ++cnt;

            temp = 27 - min(5, v[2]) * 4;

            v[2] -= min(5, v[2]);

            v[1] -= temp;
        }
        else if(remain == 2) {
            ++cnt;

            temp = 18 - min(3, v[2]) * 4;

            v[2] -= min(3, v[2]);

            v[1] -= temp;
        }
        else if(remain == 3) {
            ++cnt;

            temp = 9 - min(1, v[2]) * 4;

            v[2] -= min(1, v[2]);

            v[1] -= temp;
        }
    }

    if(v[2] > 0) {
        cnt += v[2] / 9;

        remain = v[2] % 9;

        if(remain > 0) {
            ++cnt;

            temp = 36 - remain * 4;

            v[1] -= temp;
        }
    }

    if(v[1] > 0) cnt += (v[1] / 36) + 1;

    cout << cnt;

    return 0;
}