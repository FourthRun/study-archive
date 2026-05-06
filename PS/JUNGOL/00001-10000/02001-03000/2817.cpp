#include <iostream>
#include <vector>

using namespace std;

int k;
vector<int> v;
vector<int> store(6);

void lotto(int cnt, int start) {
    if(cnt == 6) {
        for(int i : store) {
            cout << i << " ";
        }

        cout << "\n";

        return;
    }

    for(int i = start; i < k; ++i) {
        store[cnt] = v[i];

        lotto(cnt + 1, i + 1);
    }
}

int main() {
    int num;

    cin >> k;

    for(int i = 0; i < k; ++i) {
        cin >> num;

        v.push_back(num);
    }

    lotto(0, 0);

    return 0;
}