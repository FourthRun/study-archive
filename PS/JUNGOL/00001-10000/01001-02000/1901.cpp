#include <iostream>

using namespace std;

const int idx = 1000000;
bool check[idx + 1];

int main() {
    check[1] = true;

    for(int i = 2; i * i <= idx; ++i) {
        if(check[i] == false) {
            for(int j = i * i; j <= idx; j += i) {
                check[j] = true;
            }
        }
    }

    int n, m, temp, uprime, dprime;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> m;

        temp = m;
        dprime = 0;

        while(temp > 1) {
            if(check[temp] == false) {
                dprime = temp;

                break;
            }

            --temp;
        }

        temp = m;
        uprime = 0;

        while(temp <= idx) {
            if(check[temp] == false) {
                uprime = temp;

                break;
            }

            ++temp;
        }

        if(uprime == m) cout << m << "\n";
        else if(dprime == 0) cout << uprime << "\n";
        else if(uprime == 0) cout << dprime << "\n";
        else if(uprime - m > m - dprime) cout << dprime << "\n";
        else if(uprime - m < m - dprime) cout << uprime << "\n";
        else cout << dprime << " " << uprime << "\n";
    }

    return 0;
}