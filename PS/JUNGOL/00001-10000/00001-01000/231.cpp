#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

void calc(int n) {
    v.push_back(n);

    if(n <= 1) return;
    else calc(n / 2);
}

int main() {
    int n;

    cin >> n;

    calc(n);

    for(int i = v.size() - 1; i >= 0; --i) {
        cout << v[i] << " ";
    }

    return 0;
}