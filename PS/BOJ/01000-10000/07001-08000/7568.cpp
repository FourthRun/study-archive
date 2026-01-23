#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {
    int n, weight, height;
    int count;
    vector<pair<int, int>> v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> weight >> height;

        v.push_back({weight, height});
    }

    for(int i = 0; i < n; i++) {
        count = 1;

        for(int j = 0; j < n; j++) {
            if(v[i].first < v[j].first && v[i].second < v[j].second) count++;
        }

        cout << count << " ";
    }

    return 0;
}