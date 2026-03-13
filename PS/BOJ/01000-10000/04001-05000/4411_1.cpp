#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n, avg, result, high, low;
    double num;

    while(cin >> n) {
        vector<int> v(n);
        avg = 0;
        low = 0;
        high = 0;

        if(n == 0) break;

        for(int i = 0; i < n; i++) {
            cin >> num;

            v[i] = (int)(num * 100 + 0.5);

            avg += v[i];
        }

        avg /= n;

        for(int i : v) {
            if(i < avg) low += avg - i;
            else if(i > avg) high += i - (avg + 1);
        }

        result = max(high, low);
        
        cout << "$" << fixed << setprecision(2) << (double)result / 100 << "\n";
    }

    return 0;
}