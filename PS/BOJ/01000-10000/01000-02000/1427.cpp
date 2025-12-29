#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<int> v;

    cin >> n;

    while(n > 0) {
        v.push_back(n % 10);
        n /= 10;
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
    }

    return 0;
}