#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, p, temp;
bool check[98];
vector<int> store;

void calc(int num) {
    check[num] = true;

    store.push_back(num);

    if(check[(num * n) % p] == true) {
        temp = (num * n) % p;

        return;
    }
    else calc((num * n) % p);
}

int main() {
    cin >> n >> p;

    calc(n);

    cout << store.end() - find(store.begin(), store.end(), temp);

    return 0;
}