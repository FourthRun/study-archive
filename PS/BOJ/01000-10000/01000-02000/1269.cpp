#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, num;
    set<int> s1, s2, result;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> num;

        s1.insert(num);
    }

    for(int i = 0; i < m; i++) {
        cin >> num;

        s2.insert(num);        
    }

    set_symmetric_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(result, result.begin()));

    cout << result.size();

    return 0;
}