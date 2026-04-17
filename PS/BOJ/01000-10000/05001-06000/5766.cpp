#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, num, biggest, small;
    vector<int> res;
    
    while(cin >> n >> m) {
        if(n == 0 && m == 0) break;
        else {
            vector<int> v(10002);
            small = 0;

            for(int i = 0; i < n * m; ++i) {
                cin >> num;

                ++v[num];
            }

            biggest = *max_element(v.begin(), v.end());

            for(int i = 1; i <= 10000; ++i) {
                if(small < v[i] && v[i] < biggest) {
                    small = v[i];

                    res.clear();

                    res.push_back(i);
                }
                else if(small == v[i]) res.push_back(i);
            }

            for(int i : res) {
                cout << i << " ";
            }

            cout << "\n";
        }
    }

    return 0;
}