#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    int num;
    
    cin >> word >> num;

    cout << word[num - 1];
    // == cout << word.at(num - 1);

    return 0;
}