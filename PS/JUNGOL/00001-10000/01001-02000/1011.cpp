#include <iostream>
#include <vector>

using namespace std;

const int fixN = 1000000;
bool prime[fixN + 1];

int main() {
    prime[0] = true;
    prime[1] = true;

    for(int i = 2; i * i <= fixN; ++i) {
        if(prime[i] == false) {
            for(int j = i * i; j <= fixN; j += i) {
                prime[j] = true;
            }
        }
    }

    int n, m, k;

    cin >> n >> m >> k;

    vector<int> v(n);

    for(int i = 1; i <= m; ++i) {
        if(prime[i] == false) {
            ++v[(i - 1) % n];
        } 
    }

    cout << v[k];

    return 0;
}