#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct User {
    int age;
    string name;
};

bool compare(const User& a, const User& b) {
    return a.age < b.age;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<User> v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        User temp;
        cin >> temp.age >> temp.name;

        v.push_back(temp);
    }

    stable_sort(v.begin(), v.end(), compare);

    for(const auto& s: v) {
        cout << s.age << " " << s.name << "\n";
    }

    return 0;
}