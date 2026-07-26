#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int fixN = 300000;
bool prime[fixN + 1];

int main() {
    vector<int> v;
    int n;

    prime[0] = true;
    prime[1] = true;

    for(int i = 2; i * i <= fixN; ++i) {
        if(prime[i] == false) {
            for(int j = i * i; j <= fixN; j += i) {
                prime[j] = true;
            }
        }
    }

    for(int i = 2; i <= fixN; ++i) {
        if(prime[i] == false) v.push_back(i);
    }

    while(cin >> n) {
        if(n == 0) break;

        cout << upper_bound(v.begin(), v.end(), 2 * n) - upper_bound(v.begin(), v.end(), n) << "\n";
    }

    return 0;
}