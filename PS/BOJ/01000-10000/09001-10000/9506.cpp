#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int num;
    int count = 0;
    vector<int> v;

    while(cin >> num) {
        if(num == -1) break;
        else {
            for(int i = num; 1 < i; i--) {
                if(num % i == 0) {
                    v.push_back(num / i);
                }
            }

            if(num == accumulate(v.begin(), v.end(), 0)) {
                cout << num << " = 1";
                for(int i = 1; i < v.size(); i++) {
                    cout << " + " << v[i];
                }
            }
            else cout << num << " is NOT perfect.";
        }

        cout << "\n";

        v.clear();
    }

    return 0;
}