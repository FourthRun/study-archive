#include <iostream>

using namespace std;

int main() {
    int num, score, win;
    int max = 0;

    for(int i = 0; i < 5; i++) {
        score = 0;

        for(int j = 0; j < 4; j++) {
            cin >> num;

            score += num;
        }

        if(score > max) {
            max = score;
            win = i;
        }
    }

    cout << win + 1 << " " << max;

    return 0;
}