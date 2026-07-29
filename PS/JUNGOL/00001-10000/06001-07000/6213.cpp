#include <iostream>
#include <queue>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, n1, n2, n3;
    set<int> s;

    cin >> t;

    while(t--) {
        s.clear();

        cin >> n;
        
        cin >> n1 >> n2;

        if(n1 == n2) s.insert(n1);

        for(int i = 0; i < n - 2; ++i) {
            cin >> n3;

            if(n2 == n3) s.insert(n3);
            if(n1 == n3) s.insert(n3);

            n1 = n2;
            n2 = n3;
        }

        if(s.size() == 0) cout << -1;
        else {
            for(int i : s) {
                cout << i << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}