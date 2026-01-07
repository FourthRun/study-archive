#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    string temp;
    map<string, int> pocketmon_num;
    map<int, string> pocketmon_name;

    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        cin >> temp;

        pocketmon_num.insert({temp, i});
        pocketmon_name.insert({i, temp});
    }

    for(int i = 0; i < m; i++) {
        cin >> temp;

        if('0' <= temp[0] && temp[0] <= '9') {
            int num = stoi(temp);

            cout << pocketmon_name[num] << "\n";
        }
        else cout << pocketmon_num[temp] << "\n";
    }

    return 0;
}