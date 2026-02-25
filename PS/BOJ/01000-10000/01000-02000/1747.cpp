#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int MAX = 10000000;
bool arr[MAX + 1];

int main() {
    arr[0] = true;
    arr[1] = false;

    for(int i = 2; i * i <= MAX; i++) {
        if(!arr[i]) {
            for(int j = i * i; j <= MAX; j += i) {
                arr[j] = true;
            }
        }
    }

    int n;
    string s1, s2;

    cin >> n;

    for(int i = n; i <= MAX; i++) {
        if(i == 1) {
            cout << 2;

            break;
        }

        if(!arr[i]) {
            s1 = to_string(i);
            s2 = s1;
            
            reverse(s2.begin(), s2.end());

            if(s1 == s2) {
                cout << i;

                break;
            }
        }
    }

    return 0;
}