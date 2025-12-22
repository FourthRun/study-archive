#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;

    cin >> num;

    for(int i = 0; i < num; i++) {
        int freq;
        string word;
        
        cin >> freq >> word;

        for(char c : word) {
            cout << string(freq, c);
        }
        cout << "\n";
    }

    return 0;
}