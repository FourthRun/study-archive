#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int> pqmax;
    priority_queue<int, vector<int>, greater<>> pqmin;
    int n, num;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> num;

        pqmax.push(num);
        pqmin.push(num);
    }

    while(!pqmax.empty()) {
        cout << pqmax.top() << " ";

        pqmax.pop();
    }

    cout << "\n";

    while(!pqmin.empty()) {
        cout << pqmin.top() << " ";

        pqmin.pop();
    }

    return 0;
}