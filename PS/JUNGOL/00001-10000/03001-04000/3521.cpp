#include <iostream>

using namespace std;

int weight[5];

int main() {
    int arr[] = {1, 2, 4, 8, 16};
    int cnt = 0;
    int n;

    for(int i = 0; i < 5; ++i) {
        cin >> weight[i];
    }

    cin >> n;

    for(int i = 4; i >= 0; --i) {
        while(n - arr[i] >= 0 && weight[i] > 0) {
            n -= arr[i];
            --weight[i];
            ++cnt;
        }
    }

    if(n == 0) cout << cnt;
    else cout << "impossible";

    return 0;
}