#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();

    int n, num, triM;
    float sum = 0;
    float trimmedMean;
    vector<int> v;

    cin >> n;

    if(n > 0) {
        for(int i = 0; i < n; i++) {
            cin >> num;

            v.push_back(num);
        }

        sort(v.begin(), v.end());

        trimmedMean = n * 15;

        triM = round(trimmedMean / 100);

        for(int i = 0 + triM; i < n - triM; i++) {
            sum += v[i];
        }

        cout << round(sum / (n - triM * 2));
    } 
    else cout << 0;

    return 0;
}