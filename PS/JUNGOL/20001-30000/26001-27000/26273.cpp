#include <iostream>
#include <string>

using namespace std;

int arr[3];

int main() {
    int n, cnt;
    string s;

    cin >> n;

    while(n--) {
        cnt = 0;

        cin >> s;

        for(char c : s) {
            cnt += c - '0';  
        }
        
        ++arr[cnt % 3];
    }

    for(int i = 0; i < 3; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}