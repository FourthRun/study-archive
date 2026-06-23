#include <iostream>
#include <vector>
#include <utility>
#include <map>

using namespace std;

int arr[101];

map<int, vector<pair<int, int>>> toy;

void calc(int index, int num) {
    if(toy.count(index) == 0) arr[index] += num;
    else {
        for(auto it : toy[index]) {
            calc(it.first, it.second * num);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, part, index, num;

    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        cin >> part >> index >> num;

        toy[part].push_back({index, num});
    }

    calc(n, 1);

    for(int i = 1; i <= 100; ++i) {
        if(arr[i] != 0) cout << i << " " << arr[i] << "\n";
    }

    return 0;
}