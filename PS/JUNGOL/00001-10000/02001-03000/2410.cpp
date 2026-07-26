#include <iostream>

using namespace std;

const int idx = 50000;
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

    int n, maxP, temp;
    bool ischeck;

    cin >> n;

    for(int i = 2; i * i <= n; ++i) {
        if(check[i] == false) maxP = i;
    }

    temp = n / maxP;

    while(1) {
        ischeck = true;
        
        for(int i = 2; i < maxP; ++i) {
            if(temp % i == 0) {
                ischeck = false;

                break;
            }
        }

        if(ischeck) break;

        --temp;
    }

    cout << maxP * temp;

    return 0;
}