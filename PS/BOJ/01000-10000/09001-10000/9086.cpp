#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;

    cin >> num;

    for(int i = 0; i < num; i++) {
        string word;
        cin >> word;
        cout << word.front() << word.back() << "\n";
        // == cout << word[0] << word[word.size() - 1] << "\n";
    }

    return 0;
}