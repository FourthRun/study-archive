#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> v(3);

    while(cin >> v[0] >> v[1] >> v[2] && v[0] != 0 && v[1] != 0 && v[2] != 0) {
        sort(v.begin(), v.end());

        if(v[0] * v[0] +  v[1] * v[1] == v[2] * v[2]) cout << "right";
        else cout << "wrong";

        cout << "\n";
    }

    return 0;
}