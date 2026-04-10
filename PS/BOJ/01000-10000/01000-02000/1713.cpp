#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

struct student {
    int vote;
    int time;
    int index;
};

bool compare(const student& a, const student& b) {
    if(a.vote != b.vote) {
        return a.vote < b.vote;
    }

    return a.time < b.time;
}

int arr[102];

int main() {
    int n, m, rec, cnt, nowindex;
    bool check;

    cin >> n >> m;

    vector<student> v(n);
    vector<int> res;

    for(int i = 1; i <= m; ++i) {
        check = false;

        cin >> rec;

        ++arr[rec];

        // 먼저 이미 액자에 올라와있는지 체크
        // if 이미 올라와있으면 투표수 갱신
        // else 올라갈 수 있는지 체크
        // // if v[0].vote = arr[rec] 이면 바꾸기

        for(int j = 0; j < n; ++j) {
            if(v[j].index == rec) {
                nowindex = j;

                check = true;

                break;
            }
        }

        if(check) ++v[nowindex].vote;
        else if(v[0].vote = arr[rec]) {
            arr[v[0].index] = 0;

            v[0].time = i;
            v[0].index = rec;
        }

        sort(v.begin(), v.end(), compare);
    }

    for(const auto& it : v) {
        res.push_back(it.index);
    }

    sort(res.begin(), res.end());

    for(int i : res) {
        if(i != 0) cout << i << " ";
    }

    return 0;
}