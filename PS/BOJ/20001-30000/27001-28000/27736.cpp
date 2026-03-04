#include <iostream>

using namespace std;

int vote[2];

int main() {
    int n, num;
    int sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;
        
        vote[num + 1]++;
    }

    if(vote[1] * 2 >= n) cout << "INVALID";
    else if(vote[0] >= vote[2]) cout << "REJECTED";
    else cout << "APPROVED";

    return 0;
}