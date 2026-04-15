#include <iostream>
#include <map>
#include <string>
#include <utility>

using namespace std;

int main() {
    int n, m, num;
    string s;
    char c;
    map<int, pair<string, int>> score;
    pair<string, int> max = {"", -100000};
    pair<string, int> min = {"", 100000};

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> num;

        getline(cin, s);

        cin.clear();

        score[num] = {s, 0};
    }

    cin >> m;

    for(int i = 0; i < m; ++i) {
        cin >> num >> c;

        if(c == 'S') score[num].second += 10;
        else if(c == 'Q') score[num].second += 5;
        else if(c == 'A') score[num].second += 7;
        else if(c == 'L') score[num].second -= 8;
        else if(c == 'F') score[num].second += 4;
        else if(c == 'D') score[num].second -= 5;
        else if(c == 'E') score[num].second -= 10;
    }

    for(const auto& it : score) {
        if(max.second < it.second.second) {
            max.first = it.second.first;
            max.second = it.second.second;
        }
        else if(max.second == it.second.second) max.first += it.second.first;

        if(min.second > it.second.second) {
            min.first = it.second.first;
            min.second = it.second.second;
        }
        else if(min.second == it.second.second) min.first += it.second.first;
    }

    cout << max.second << max.first << "\n";
    cout << min.second << min.first;

    return 0;
}