#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, int> drug;
    int n, m, r, a, b, num;
    vector<int> v(100);
    bool check;

    cin >> n;
    
    while(n--) {
        cin >> a >> b;

        drug[a] = b;
    }

    cin >> m;

    while(m--) {
        v.clear();
        check = true;

        cin >> r;

        for(int i = 0; i < r; i++) {
            cin >> a;

            if(drug.count(a) == 1) v[i] = drug[a];
            else check = false;
        }

        if(check) {
            for(int i = 0; i < r; i++) {
                cout << v[i] << " ";
            }
        }
        else cout << "YOU DIED";

        cout << "\n";
    }

    return 0;
}