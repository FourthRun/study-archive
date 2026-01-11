#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, num;
    set<int> s;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;

        s.insert(num);
    }

    cin >> m;

    for(int i = 0; i < m; i++) {
        cin >> num;

        if(s.count(num)) cout << "1\n";
        else cout << "0\n";
    }

    return 0;
}