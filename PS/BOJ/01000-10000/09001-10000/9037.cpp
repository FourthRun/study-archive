#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n, num, sum;
    bool check;

    cin >> t;

    for(int i = 0; i < t; i++) {
        sum = 0;
        check = false;

        cin >> n;

        vector<int> v(n);
        vector<int> temp(n);

        for(int j = 0; j < n; j++) {
            cin >> num;

            v[j] = num;
        }

        for(int j = 0; j < v.size(); j++) {
            if(v[j] % 2 == 1) v[j]++;
        }

        for(int j = 1; j < v.size(); j++) {
            if(v[0] != v[j]) {
                check = true;

                break;
            }
        }

        while(check) {
            sum++;
            check = false;

            for(int j = 0; j < v.size(); j++) {
                v[j] /= 2;
                temp[j] = v[j];
            }

            for(int j = 0; j < v.size(); j++) {
                v[j] += temp[((v.size() + j - 1) % v.size())];
            }

            for(int j = 0; j < v.size(); j++) {
                if(v[j] % 2 == 1) v[j]++;
            }

            for(int j = 1; j < v.size(); j++) {
                if(v[0] != v[j]) {
                    check = true;

                    break;
                }
            }
        }
        
        cout << sum << "\n";
    }

    return 0;
}