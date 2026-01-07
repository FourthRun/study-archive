#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, temp;
    map<int, int> card;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> temp;

        if(card.count(temp)) {
            card[temp] += 1;
        }
        else card.insert({temp, 1});
    }

    cin >> m;

    for(int i = 0; i < m; i++) {
        cin >> temp;

        if(card.count(temp)) {
            cout << card[temp] << " ";
        }
        else cout << 0 << " ";
    }

    return 0;
}