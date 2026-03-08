#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num, result;
    string s, category;
    map<string, int> m;
    set<string> store;

    cin >> n;

    for(int i = 0; i < n; i++) {
        store.clear();
        category.clear();
        m.clear();
        result = 1;

        cin >> num;

        for(int j = 0; j < num; j++) {
            cin >> s >> category;

            store.insert(category);
            m[category]++;
        }

        for(string temp : store) {
            result *= m[temp] + 1;
        }
        
        cout << result - 1 << "\n";
    }

    return 0;
}