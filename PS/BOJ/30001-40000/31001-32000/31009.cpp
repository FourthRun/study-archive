#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num, price;
    int cnt = 0;
    vector<int> v;
    string s;

    cin >> n;

    while(n--) {
        cin >> s >> num;

        if(s == "jinju") price = num;
        else v.push_back(num);
    }

    for(int i = 0; i < v.size(); i++) {
        if(v[i] > price) ++cnt;
    }

    cout << price << "\n" << cnt;

    return 0;
}