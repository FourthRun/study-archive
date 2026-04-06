#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Student {
    string name;
    int korean;
    int english;
    int math;
};

bool compare(const Student& a, const Student& b) {
    if(a.korean != b.korean) return a.korean > b.korean;

    if(a.english != b.english) return a.english < b.english;

    if(a.math != b.math) return a.math > b.math;

    return a.name < b.name;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    vector<Student> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i].name >> v[i].korean >> v[i].english >> v[i].math;
    }

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < n; ++i) {
        cout << v[i].name << "\n";
    }

    return 0;
}