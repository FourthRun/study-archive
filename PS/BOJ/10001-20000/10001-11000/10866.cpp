#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    int n, num;
    string s;
    deque<int> d;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s;

        if(s == "push_back") {
            cin >> num;

            d.push_back(num);
        } 
        else if(s == "push_front") {
            cin >> num;

            d.push_front(num);
        }
        else if(s == "empty") cout << d.empty() << "\n";
        else if(s == "size") cout << d.size() << "\n";
        else if(!d.empty()) {
            if(s == "front") cout << d.front() << "\n";
            else if(s == "back") cout << d.back() << "\n";
            else if(s == "pop_front") {
                cout << d.front() << "\n";

                d.pop_front();
            }
            else if(s == "pop_back") {
                cout << d.back() << "\n";

                d.pop_back();
            }
        }
        else cout << -1 << "\n";
    }

    return 0;
}