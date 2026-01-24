#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int arr[8001] = {0, };

int main() {
    int n, num, median, mode, arr_max, max, min;
    int count = 0;
    double average;
    vector<int> v, mode_v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;

        v.push_back(num);

        count += num;
    }

    sort(v.begin(), v.end());

    //1. 산술평균
    average = round((double)count / n);

    if(average == -0) average = 0;

    cout << average << "\n";

    //2. 중앙값
    median = v[v.size() / 2];

    cout << median << "\n";

    //3. 최빈값
    for(const auto &p : v) {
        arr[p + 4000]++;
    }

    arr_max = *max_element(arr, arr + 8001);

    for(int i = 0; i < 8001; i++) {
        if(arr[i] == arr_max) {
            mode_v.push_back(i - 4000);
        }
    }

    if(mode_v.size() == 1) mode = mode_v[0];
    else mode = mode_v[1];

    cout << mode << "\n";

    //4. 범위
    cout << v[v.size() - 1] - v[0];

    return 0;
}