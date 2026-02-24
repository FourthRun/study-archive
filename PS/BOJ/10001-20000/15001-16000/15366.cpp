#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, num;
    vector<int> x, y;
    bool check = true;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;

        x.push_back(num);
    }

    for(int i = 0; i < n; i++) {
        cin >> num;

        y.push_back(num);
    }
    
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    for(int i = 0; i < n; i++) {
        if(x[i] > y[i]) {
            check = false;

            break;
        }
    }

    if(check) cout << "DA";
    else cout << "NE";
    
    return 0;
}