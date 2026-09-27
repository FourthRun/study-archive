#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> v;

void quick(int left, int right) {
    if (left >= right) return; // 기저 조건
    else {
        // 분할 (피벗 기준 좌우 분할)
        int pivot = v[left];
        int i = left + 1;
        int j = right;

        while (i <= j) {
            while (i <= j && v[i] <= pivot) i++;
            while (i <= j && v[j] >= pivot) j--;

            if (i < j) swap(v[i], v[j]);
        }

        swap(v[left], v[j]);
        int pivot_idx = j;

        for (int k = 0; k < n; k++) {
            cout << v[k] << " ";
        }
        cout << "\n";

        // 분할 정복
        quick(left, pivot_idx - 1);
        quick(pivot_idx + 1, right);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;

        v.push_back(num);
    }

    quick(0, n - 1);

    return 0;
}