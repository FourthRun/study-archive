#include <iostream>

long long arr[100001];

using namespace std;

int main() {
    long long n, k, result;
    long long total_Distance = 0;

    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        total_Distance += arr[i];
    }
    

    if(k >= total_Distance) {
        k -= total_Distance;

        for(int i = n - 1; i >= 0; i--) {
            if(k < arr[i]) {
                result = i + 1;

                break;
            }
            else {
                k -= arr[i];
            }            
        }   
    }
    else {
        for(int i = 0; i < n; i++) {
            if(k < arr[i]) {
                result = i + 1;

                break;
            }
            else {
                k -= arr[i];   
            }
        }
    }

    cout << result;

    return 0;
}