#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long num, left, mid, right;
    long long res = 0;
    bool asc = true;

    cin >> n >> num;

    left = num;
    mid = num;

    for(int i = 0; i < n - 1; ++i) {
        cin >> num;

        if(asc) {
            if(mid <= num) mid = num;
            else {
                right = num;

                asc = false;
            }
        }
        else {
            if(right >= num) right = num;
            else {
                res = max(res, min(mid - left, mid - right));

                left = right;

                mid = num;

                asc = true;
            }
        }
    }

    if(!asc) res = max(res, min(mid - left, mid - right));

    cout << res;

    return 0;
}