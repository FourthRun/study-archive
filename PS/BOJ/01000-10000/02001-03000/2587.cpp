#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int t, n;
    vector<int> v;

    while(cin >> n) {
        v.push_back(n);
    }

    sort(v.begin(), v.end());

    int average = accumulate(v.begin(), v.end(), 0) / (int)v.size(); 

    cout << average << "\n" << v[2];

    return 0;
}