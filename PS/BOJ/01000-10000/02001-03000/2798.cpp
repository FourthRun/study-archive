#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    int sum = 0;
    vector<int> v;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        int a;

        cin >> a;

        v.push_back(a);
    }

    for(int i = 0; i < (int)v.size(); i++) {
        for(int j = i + 1; j < (int)v.size(); j++) {
            for(int k = j + 1; k < (int)v.size(); k++) {
                if(sum < v[i] + v[j] + v[k] && v[i] + v[j] + v[k] <= m) {
                    sum = v[i] + v[j] + v[k];
                }
            }
        }
    }

    cout << sum;

    return 0;
}