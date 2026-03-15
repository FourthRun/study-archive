#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<int> add;
    bool check = false;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            add.push_back(v[i] + v[j]);
        }
    }

    sort(add.begin(), add.end());

    for(int i = n - 1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if(binary_search(add.begin(), add.end(), v[i] - v[j])) {
                cout << v[i];

                check = true;

                break;
            }
        }

        if(check) break;
    }

    return 0;
}