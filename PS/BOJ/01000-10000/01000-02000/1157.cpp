#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int arr[26] = {0, };

int main() {
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    for(char c: s) {
        arr[(int)c - 'A']++;
    }

    auto it = max_element(arr, arr + 26);
    int maxVal = *it;
    int count = 0;

    for(int n : arr) {
        if(n == maxVal) {
            count++;
        }
    }

    if(count > 1) cout << "?";
    else {
        int maxIndex = it - arr;
        cout << (char)('A' + maxIndex);
    }    

    return 0;
}