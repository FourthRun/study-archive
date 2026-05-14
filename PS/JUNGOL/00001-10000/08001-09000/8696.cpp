#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, max;
    int result = 0;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    max = v[v.size() - 1];

    for(int i = v.size() - 1; i >= 0; --i) {
        if(max >= v[i]) max = v[i];
        else {
            result = i + 1;

            break;
        }
    }

    cout << result;

    return 0;
}