#include <iostream>
#include <deque>
#include <utility>

using namespace std;

int main() {
    int n, num, content;
    pair<int, int> temp;
    deque<pair<int, int>> deq; // <content, loc>

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> num;
        
        deq.push_back({num, i});
    }

    while(true) {
        cout << deq.front().second << " ";

        content = deq.front().first;

        deq.pop_front();

        if(deq.empty()) break;
        else if(content > 0) {
            for(int i = 0; i < content - 1; i++) {
                temp = deq.front();

                deq.pop_front();

                deq.push_back(temp);
            }
        }
        else {
            for(int i = 0; i < abs(content); i++) {
                temp = deq.back();

                deq.pop_back();

                deq.push_front(temp);
            }
        }
    }

    return 0;
}