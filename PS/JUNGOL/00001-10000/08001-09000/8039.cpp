#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, q, com, people, k;
    bool check;
    map<long long, set<long long>> m;
    
    cin >> n >> q;

    vector<long long> vote(n + 1);

    for(int i = 1; i <= n; ++i) {
        m[0].insert(i);
    }

    for(int i = 0; i < q; ++i) {
        cin >> com;

        if(com == 0) {
            cin >> people >> k;

            m[vote[people]].erase(people);

            vote[people] += k;

            m[vote[people]].insert(people);
        }
        else if(com == 1) {
            cin >> k;

            if(m[k].size() == 0) cout << "None";
            else {
                for(long long j : m[k]) {
                    cout << j << " ";
                }
            }

            cout << "\n";
        }
    }

    return 0;
}