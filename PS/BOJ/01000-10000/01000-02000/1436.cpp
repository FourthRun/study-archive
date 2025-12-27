#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int count = 1;
    int num = 666;
    string s;

    cin >> n;

    while(n > count) {
        num++;
        s = to_string(num);

        if(s.find("666") != string::npos) {
            count++;
        }
    }

    cout << num;

    return 0;
}