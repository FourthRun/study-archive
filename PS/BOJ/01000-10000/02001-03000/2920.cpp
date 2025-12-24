#include <iostream>
#include <algorithm>

using namespace std;

int ascending[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int descending[8] = {8, 7, 6, 5, 4, 3, 2, 1};
int check[8] = {0, };

int main() {
    for(int i = 0; i < 8; i++) {
        int a;
        cin >> a;
        
        check[i] = a;
    }

    if(equal(check, check + sizeof(check) / sizeof(check[0]), ascending)) cout << "ascending";
    else if(equal(check, check + sizeof(check) / sizeof(check[0]), descending)) cout << "descending";
    else cout << "mixed";

    return 0;
}