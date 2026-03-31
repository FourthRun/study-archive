#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n, num, index;
    long long min = 1000000000000;

    cin >> n;

    vector<long long> cross(n + 1);
    vector<long long> left(n + 1);
    vector<long long> right(n + 1);

    for(int i = 1; i <= n; i++) {
        cin >> cross[i];
    }

    left[1] = 0;

    for(int i = 2; i <= n; i++) {
        cin >> left[i]; 

        left[i] += left[i - 1];
    }

    for(int i = 1; i < n; i++) {
        cin >> right[i];
    }

    for(int i = n - 2; i > 0; i--) {
        right[i] += right[i + 1];
    }

    for(int i = 1; i <= n; i++) {
        if(min > cross[i] + left[i] + right[i]) {
            min = cross[i] + left[i] + right[i];
            index = i;
        }
    }

    cout << index << " " << min;

    return 0;
}