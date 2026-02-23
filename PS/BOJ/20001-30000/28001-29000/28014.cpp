#include <iostream>

using namespace std;

int arr[5000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int cnt = 0;

    cin >> t;
    
    for(int i = 1; i <= t; i++) {
        cin >> arr[i];

        if(arr[i] >= arr[i - 1]) cnt++;
    }

    cout << cnt;

    return 0;
}