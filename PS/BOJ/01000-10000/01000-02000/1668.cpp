#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, num, max, result;
    vector<int> v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;

        v.push_back(num);
    }

    max = v[0];
    result = 1;

    for(int i = 1; i < n; i++) {
        if(max < v[i]) {
            result++;
            max = v[i];
        }
    }

    cout << result << "\n";

    max = v[v.size() - 1];
    result = 1;

    for(int i = v.size() - 1; i >= 0; i--) {
        if(max < v[i]) {
            result++;
            max = v[i];
        }
    }

    cout << result;

    return 0;
}