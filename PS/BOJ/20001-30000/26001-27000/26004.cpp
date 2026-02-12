#include <iostream>
#include <string>

int arr[5];

using namespace std;

int main() {
    int n, result = 100000;
    string s;

    cin >> n >> s;

    for(char c : s) {
        if(c == 'H') arr[0]++;
        else if(c == 'I') arr[1]++;
        else if(c == 'A') arr[2]++;
        else if(c == 'R') arr[3]++;
        else if(c == 'C') arr[4]++;
    }

    for(int i = 0; i < 5; i++) {
        if(arr[i] < result) result = arr[i];
    }
    
    cout << result;

    return 0;
}