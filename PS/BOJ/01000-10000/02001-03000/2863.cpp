#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    double a, b, c, d, first, second, third, fourth;
    vector<double> v;

    cin >> a >> b >> c >> d;

    v.push_back(a / c + b / d);
    v.push_back(c / d + a / b);
    v.push_back(d / b + c / a);
    v.push_back(b / a + d / c);

    auto it = max_element(v.begin(), v.end());

    int index = distance(v.begin(), it);

    cout << index;

    return 0;
}