#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n;

    cin >> t;

    vector<int> v(t);

    for(int i = 0; i < t; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < (int)v.size(); i++) {
        for(int j = i + 1; j < (int)v.size(); j++) {
            if(v[i] > v[j]) swap(v[i], v[j]);
        }
        
        cout << v[i] << "\n";
    }

    return 0;
}