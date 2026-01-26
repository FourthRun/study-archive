#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    int c, n, score;
    double average, over;
    vector<int> v;

    cin >> c;

    for(int i = 0; i < c; i++) {
        v.clear();
        average = 0;
        over = 0;

        cin >> n;

        for(int j = 0; j < n; j++) {
            cin >> score;

            v.push_back(score);

            average += score;
        }

        average /= n;

        for(int j = 0; j < v.size(); j++) {
            if(v[j] > average) over++;
        }

        cout << fixed << setprecision(3) << over / n * 100 << "%\n";
    }

    return 0;
}