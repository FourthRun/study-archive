#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, num, m;
    string s, temp, clothes;

    cin >> n;

    while(n--) {
        stack<string> shirt, pants, socks;

        cin >> num;
        
        cin.ignore();

        for(int i = 0; i < num; i++) {
            getline(cin, s);

            temp = s.substr(s.size() - 6, 5);
            clothes = s.substr(0, s.size() - 8);

            if(temp == "shirt") shirt.push(clothes);
            else if(temp == "pants") pants.push(clothes);
            else socks.push(clothes);
        }

        m = min(min(shirt.size(), pants.size()), socks.size());

        for(int i = 0; i < m; i++) {
            cout << shirt.top() << ", " << pants.top() << ", " << socks.top() << "\n";

            shirt.pop();
            pants.pop();
            socks.pop();
        }

        cout << "\n";
    }

    return 0;
}