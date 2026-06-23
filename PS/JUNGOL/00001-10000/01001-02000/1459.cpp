#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[101];
bool check[101];
int temp;
vector<int> store;

void calc(int n) {
    check[n] = true;
    store.push_back(n);

    if(n == arr[n] || check[arr[n]] == true) {
        temp = arr[n];

        return;
    }
    else calc(arr[n]);
}

int main() {
    int n, target;
    vector<int> v;

    cin >> n;

    for(int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    for(int i = 1; i <= n; ++i) {
        if(check[i] == false) {
            store.clear();

            calc(i);

            // for(int k : store) {
            //     cout << k << " ";
            // }

            // cout <<  "\n";

            target = find(store.begin(), store.end(), temp) - store.begin();

            for(int j = target; j < store.size(); ++j) {
                v.push_back(store[j]);
            }
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << "\n";

    for(int i : v) {
        cout << i << "\n";
    }

    return 0;
}