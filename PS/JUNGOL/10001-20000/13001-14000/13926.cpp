#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Ballon {
    int need;
    int da;
    int db;
};

int disx;
int disy;

bool compare(const Ballon& x, const Ballon& y) {
    disx = abs(x.da - x.db);
    disy = abs(y.da - y.db);

    if(disx != disy) return disx > disy;

    return x.need > y.need;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, temp, cnt;

    while(cin >> n >> a >> b) {
        if(n == 0 && a == 0 && b == 0) break;

        vector<Ballon> v(n);
        cnt = 0;

        for(int i = 0; i < n; ++i) {
            cin >> v[i].need >> v[i].da >> v[i].db;
        }

        sort(v.begin(), v.end(), compare);

        for(int i = 0; i < n; ++i) {
            if(v[i].da > v[i].db && b > 0) {
                if(b >= v[i].need) {
                    b -= v[i].need;
                    cnt += v[i].db * v[i].need;
                }
                else {
                    temp = v[i].need - b;

                    cnt += v[i].da * temp + v[i].db * b;

                    a -= temp;
                    b = 0;
                }
            }
            else {
                if(a >= v[i].need) {
                    a -= v[i].need;
                    cnt += v[i].da * v[i].need;
                }
                else {
                    temp = v[i].need - a;

                    cnt += v[i].da * a + v[i].db * temp;

                    b -= temp;
                    a = 0;
                }
            }
        }

        cout << cnt << "\n";
    } 

    return 0;
}