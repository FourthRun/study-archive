#include <iostream>
#include <string>

int arr[101];
bool check[101];

using namespace std;

int main() {
    int k, n, x;
    int sum = 0;
    string s;

    for(int i = 1; i <= 100; i++) {
        arr[i] = i;
    }

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s >> x;

        for(int j = 1; j <= 100; j++) {
            if(s == "ADD") arr[j] += x;
            else if(s == "MULTIPLY") arr[j] *= x;
            else if(s == "SUBTRACT") {
                if(arr[j] - x < 0) {
                    check[j] = true;
                }

                arr[j] -= x;
            }
            else {
                if(arr[j] % x != 0) {
                    check[j] = true;
                }

                arr[j] /= x;
            }
        }
    }

    for(int i = 1; i <= 100; i++) {
        if(check[i]) sum++;
    }

    cout << sum;

    return 0;
}