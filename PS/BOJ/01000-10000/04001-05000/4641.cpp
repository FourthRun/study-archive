#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sum;
    vector<int> v;

    while(cin >> n) {
        if(n == 0) {
            sum = 0;

            sort(v.begin(), v.end());

            for(int i = 0; i < v.size(); i++) {
                for(int j = i + 1; j < v.size(); j++) {
                    if(v[i] * 2 == v[j]) sum++;
                }
            }
            
            cout << sum << "\n";

            v.clear();
        }
        else if(n == -1) break;
        else v.push_back(n);
    }

    return 0;
}