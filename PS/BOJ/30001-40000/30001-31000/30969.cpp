#include <iostream>
#include <string>

short arr[5000001];

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, num, price;
    int cnt = 0;
    string s;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s >> num;

        if(s == "jinju") price = num;
        else if(num > 1000) ++cnt;
        else arr[i] = num;
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] > price) ++cnt;
    }

    cout << price << "\n" << cnt;

    return 0;
}