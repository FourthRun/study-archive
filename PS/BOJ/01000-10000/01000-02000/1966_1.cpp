#include <iostream>
#include <deque>

using namespace std;

int main() {
    int t, n, m, num, count, temp;
    bool check;
    deque<int> dq; 

    cin >> t;

    for(int i = 0; i < t; i++) {
        dq.clear();
        count = 1;

        cin >> n >> m;

        for(int j = 0; j < n; j++) {
            cin >> num;

            dq.push_back(num);
        }

        if(dq.size() == 1) cout << 1 << "\n";
        else {
            while(true) {
                check = true;

                for(int j = 1; j < dq.size(); j++) {
                    if(dq[0] < dq[j]) {
                        check = false;

                        break;
                    }
                }

                if(check) {
                    if(m == 0) {
                        cout << count << "\n";
                        
                        break;
                    }
                    else {
                        dq.pop_front();
                        
                        count++;
                        m--;
                    }
                }
                else {
                    temp = dq.front();

                    dq.pop_front();
                    dq.push_back(temp);

                    if(m == 0) m = dq.size() - 1;
                    else m--;
                }
            }
        }
    }

    return 0;
}