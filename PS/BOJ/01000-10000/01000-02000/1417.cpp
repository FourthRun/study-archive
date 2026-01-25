#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num, index, now;
    int count = 0;
    vector<int> v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;

        v.push_back(num);
    }

    now = v[0];
    v[0] = 0;
    
    while(true) {
        if(v.size() == 1) {
            break;
        }
        else {
            auto it = max_element(v.begin(), v.end());

            index = distance(v.begin(), it);

            if(index == 0) break;
            else if(now > v[index]) break;
            else {
                now++;
                v[index]--;
                count++;
            }
        }
    }

    cout << count;

    return 0;
}