#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> v(3);

    while(cin >> v[0] >> v[1]>> v[2]) {
        sort(v.begin(), v.end());

        if(v[0] == 0 && v[1] == 0 && v[2] == 0) break;
        else if(v[0] + v[1] <= v[2]) cout << "Invalid";
        else if(v[0] == v[1] && v[1] == v[2]) cout << "Equilateral";
        else if(v[0] == v[1] || v[1] == v[2] || v[2] == v[0]) cout << "Isosceles";
        else cout << "Scalene";

        cout << "\n";
    }
    
    return 0;
}