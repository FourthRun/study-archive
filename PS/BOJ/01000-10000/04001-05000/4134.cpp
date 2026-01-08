#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long num, result;

    cin >> n;

    for(long long i = 0; i < n; i++) {
        cin >> num;

        while(true) {
            bool check = true;
            
            for(long long j = 2; j * j <= num; j++) {
                if(num % j == 0) {
                    num++;
                    check = false;

                    break;
                }
            }

            if(check) break;
        }

        if(num == 0 || num == 1) cout << 2 << "\n";
        else cout << num << "\n";
    }

    return 0;
}

// 입력을 vector에 다 받은 다음에 한번에 처리?
// sorting