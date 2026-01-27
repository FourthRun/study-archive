#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, m;
    int outCount = 0;
    int inCount;
    char temp;
    bool check;
    string s1, s2;
    vector<char> v;
    queue<char> q;

    cin >> n >> s1 >> m >> s2;

    for(char c : s1) {
        q.push(c);
    }
    
    for(char c : s2) {
        v.push_back(c);
    }

    for(int i = 0; i < v.size(); i++) {
        inCount = 0;
        check = false;

        for(int j = 0; j < q.size(); j++) {

            outCount++;
            
            if(v[i] == q.front()) {
                temp = q.front();
                q.pop();
                q.push(temp);
                check = true;

                break;
            }
            else {
                temp = q.front();
                q.pop();
                q.push(temp);
            }
        }

        if(!check) {
            outCount = -1;

            break;
        }
    }

    cout << outCount;

    return 0;
}