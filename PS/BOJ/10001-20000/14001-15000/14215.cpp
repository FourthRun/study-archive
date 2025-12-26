#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> v(3);

    cin >> v[0] >> v[1]>> v[2];

    sort(v.begin(), v.end());

    if(v[0] + v[1] <= v[2]) cout << (v[0] + v[1]) * 2 - 1;
    else cout << v[0] + v[1] + v[2];
    
    return 0;
}