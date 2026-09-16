#include <iostream>

using namespace std;

const long long MOD = 1000000007;

struct Matrix {
    long long a00, a01, a10, a11;
};

Matrix compare(const Matrix& a, const Matrix& b) {
    return {
        ((a.a00 * b.a00) % MOD + (a.a01 * b.a10) % MOD) % MOD,
        ((a.a00 * b.a01) % MOD + (a.a01 * b.a11) % MOD) % MOD,
        ((a.a10 * b.a00) % MOD + (a.a11 * b.a10) % MOD) % MOD,
        ((a.a10 * b.a01) % MOD + (a.a11 * b.a11) % MOD) % MOD
    };
}

Matrix pow(const Matrix& mt, long long exp) {
    if(exp == 0) return {1, 0, 0, 1};

    Matrix half = pow(mt, exp / 2);
    Matrix res = compare(half, half);

    if(exp % 2 == 1) res = compare(res, mt);
    
    return res;
}

long long fibo(long long k) {
    Matrix s = {1, 1, 1, 0};

    return pow(s, k).a01;
}

int main() {
    long long n;

    while(cin >> n) {
        if(n == -1) break;

        cout << fibo(n) << "\n";
    }

    return 0;
}