#include <iostream>

using namespace std;

int main() {
    int total, allCount, price, count;
    int calcValue = 0;

    cin >> total >> allCount;

    for(int i = 1; i <= allCount; i++) {
        cin >> price >> count;
        calcValue += price * count;
    }

    if(total == calcValue) cout << "Yes";
    else cout << "No";

    return 0;
}