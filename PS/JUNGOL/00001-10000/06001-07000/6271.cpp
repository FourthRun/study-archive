#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Work {
    int day;
    int reward;
    int index;
};

bool compare(const Work &a, const Work &b) {
    if(a.day * b.reward != b.day * a.reward) return a.day * b.reward < b.day * a.reward;

    return a.index < b.index;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    
    cin >> n;

    vector<Work> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i].day >> v[i].reward;

        v[i].index = i + 1;
    }

    sort(v.begin(), v.end(), compare);

    for(auto it : v) {
        cout << it.index << " ";
    }
}