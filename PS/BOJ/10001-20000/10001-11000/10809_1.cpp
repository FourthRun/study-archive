#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string word;
    int arr[26];
    fill(arr, arr + 26, -1);

    cin >> word;

    for(int i = 0; i < (int)word.size(); i++) {
        int c = word[i] - 'a';
        if(arr[c] == -1) arr[c] = i;
    }

    for(int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}