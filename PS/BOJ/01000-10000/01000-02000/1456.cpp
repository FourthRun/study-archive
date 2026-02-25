#include <iostream>

using namespace std;

const long long MAX = 10000000;
bool arr[MAX + 1];

int main() {
    arr[0] = true;
    arr[1] = true;

    for(long long i = 2; i * i <= MAX; i++) {
        if(!arr[i]) {
            for(long long j = i * i; j <= MAX; j += i) {
                arr[j] = true;
            }
        }
    }

    long long a, b, sum;
    long long cnt = 0;

    cin >> a >> b;

    for(long long i = 2; i <= MAX; i++) {
        if(!arr[i]) {
            sum = i;

            while(sum <= b / i) {
                sum *= i;

                if(sum >= a) cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}