#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int result = 0;
    int count = 0;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        count += i;

        result += i * (i + 1) + count;
    }

    cout << result;
    

    return 0;
}