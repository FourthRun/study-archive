#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

float arr[1000] = {0, };

int main() {
    int test, maxPrice;

    cin >> test;

    for(int i = 0; i < test; i++) {
        cin >> arr[i];
    }

    maxPrice = *max_element(arr, arr + test);

    transform(arr, arr + test, arr, [maxPrice](float n) {
        return n / maxPrice * 100;
    });

    float avg = accumulate(arr, arr + test, 0.0) / test;

    cout << avg;

    return 0;
}