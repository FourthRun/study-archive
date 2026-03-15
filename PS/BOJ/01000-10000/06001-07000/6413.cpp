#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    int cnt;
    string s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, last;
    bool check = false;

    while(1) {
        cnt = 1;
        queue<string> q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12, q13;
        
        for(int i = 0; i < 4; i++) {
            cin >> s13;

            if(s13 == "#") {
                check = true;

                break;
            }

            cin >> s12 >> s11 >> s10 >> s9 >> s8 >> s7 >> s6 >> s5 >> s4 >> s3 >> s2 >> s1;
            
            q1.push(s1);
            q2.push(s2);
            q3.push(s3);
            q4.push(s4);
            q5.push(s5);
            q6.push(s6);
            q7.push(s7);
            q8.push(s8);
            q9.push(s9);
            q10.push(s10);
            q11.push(s11);
            q12.push(s12);
            q13.push(s13);
        }

        if(check) break;

        last = q13.front();
        q13.pop();
        
        while(1) {
            if(last[0] == 'A') {
                if(q1.empty()) break;

                last = q1.front();
                q1.pop();
            }
            else if(last[0] == '2') {
                if(q2.empty()) break;

                last = q2.front();
                q2.pop();
            }
            else if(last[0] == '3') {
                if(q3.empty()) break;

                last = q3.front();
                q3.pop();
            }
            else if(last[0] == '4') {
                if(q4.empty()) break;

                last = q4.front();
                q4.pop();
            }
            else if(last[0] == '5') {
                if(q5.empty()) break;

                last = q5.front();
                q5.pop();
            }
            else if(last[0] == '6') {
                if(q6.empty()) break;

                last = q6.front();
                q6.pop();
            }
            else if(last[0] == '7') {
                if(q7.empty()) break;

                last = q7.front();
                q7.pop();
            }
            else if(last[0] == '8') {
                if(q8.empty()) break;

                last = q8.front();
                q8.pop();
            }
            else if(last[0] == '9') {
                if(q9.empty()) break;

                last = q9.front();
                q9.pop();
            }
            else if(last[0] == 'T') {
                if(q10.empty()) break;

                last = q10.front();
                q10.pop();
            }
            else if(last[0] == 'J') {
                if(q11.empty()) break;

                last = q11.front();
                q11.pop();
            }
            else if(last[0] == 'Q') {
                if(q12.empty()) break;

                last = q12.front();
                q12.pop();
            }
            else if(last[0] == 'K') {
                if(q13.empty()) break;

                last = q13.front();
                q13.pop();
            }

            ++cnt;
        }

        cout << cnt / 10 << cnt % 10 << "," << last << "\n";
    }

    return 0;
}