#include <iostream>

using namespace std;

long long fibDp[41];
int cntRecur = 0;
int cntDp = 0;

long long fibRecur(int n) {
    if(n > 1) return fibRecur(n - 1) + fibRecur(n - 2);
    else if(n == 1) {
        cntRecur++;

        return 1;
    }
    else return 0;
}

int main() {
    int n;

    cin >> n;

    fibRecur(n);

    fibDp[1] = 1;
    fibDp[2] = 1;

    for(int i = 3; i <= n; i++) {
        fibDp[i] = fibDp[i - 2] + fibDp[i - 1];

        cntDp++;
    }

    cout << cntRecur << " " << cntDp;
    
    return 0;
}