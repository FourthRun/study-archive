#include <iostream>

using namespace std;

int main() {
    int n;
    int count = 0;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i % 5 == 0) {
            if(i / 5 % 5 == 0) { 
                if(i / 25 % 5 == 0) count += 3;
                else count += 2;
            }
            else count++;
        }
    }

    cout << count;
    
    return 0;
}