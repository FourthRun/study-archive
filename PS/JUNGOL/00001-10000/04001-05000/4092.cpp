#include <iostream>
#include <set>

using namespace std;

int bucket[20];
bool loc[20];
set<int> s;

void track(int cnt, int now) {
    if(cnt == 4) {
        s.insert(now);

        return;
    }
    else {
        for(int i = 0; i < 20; ++i) {
            if(cnt % 2 == 0 && loc[i] == false) {
                loc[i] = !loc[i];

                track(cnt + 1, now - bucket[i]);

                loc[i] = !loc[i];
            }
            else if(cnt % 2 == 1 && loc[i] == true) {
                loc[i] = !loc[i];

                track(cnt + 1, now + bucket[i]);

                loc[i] = !loc[i];
            }
        }
    }
}

int main() {
    for(int i = 0; i < 10; ++i) {
        cin >> bucket[i];
    }

    for(int i = 10; i < 20; ++i) {
        cin >> bucket[i];

        loc[i] = true;
    }

    track(0, 1000);

    cout << s.size();

    return 0;
}