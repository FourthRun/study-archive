#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, c, num, mid, count, result, temp;
    long long low = 1000000000;
    long long high = 0;
    vector<long long> v;

    cin >> n >> c;

    for(int i = 0; i < n; i++) {
        cin >> num;

        v.push_back(num);

        if(low > num) low = num;
        if(high < num) high = num;
    }

    sort(v.begin(), v.end());

    high -= low;
    low = 1;

    while(low <= high) {
        mid = (high + low) / 2;
        count = 1;
        temp = v[0];
        
        for(int i = 1; i < n; i++) {
            if(v[i] - temp >= mid) {
                count++;
                temp = v[i];
            }
        }

        if(count >= c) {
            result = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }

    cout << result;

    return 0;
}