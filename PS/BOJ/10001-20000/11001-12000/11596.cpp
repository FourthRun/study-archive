#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v1(3);
    vector<int> v2(3);

    cin >> v1[0] >> v1[1] >> v1[2] >> v2[0] >> v2[1] >> v2[2];

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    if(v1[2] * v1[2] == v1[0] * v1[0] + v1[1] * v1[1] && v2[2] * v2[2] == v2[0] * v2[0] + v2[1] * v2[1] && v1[1] == v2[1] && v1[2] == v2[2]) cout << "YES";
    else cout << "NO";

    return 0;
}