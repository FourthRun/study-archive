#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, locate;
    int sum = 0;
    vector<int> v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> locate;

        v.push_back(locate);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                if(v[j] - v[i] <= v[k] - v[j] && v[k] - v[j] <= 2 * (v[j] - v[i])) {
                    sum++;
                }
            }
        }
    }

    cout << sum;
    
    return 0;
}