#include <iostream>

using namespace std;

int main() {
    int in, out;
    int train = 0;
    int max = -1;

    for(int i = 0; i < 10; i++) {
        cin >> out >> in;

        train = train + in - out;

        if(train > max) max = train;
    }

    cout << max;

    return 0;
}