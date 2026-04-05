#include <iostream>

using namespace std;

int main() {
    int e, em, m, mh, h;
    int cnt = 0;

    cin >> e >> em >> m >> mh >> h;

    while((e > 0 || em > 0) && (em > 0 || m > 0 || mh > 0) && (mh > 0 || h > 0) && (e + m + h + em + mh > 2)) {
        if(e >= em) --e;
        else --em;

        if(h >= mh) --h;
        else --mh;

        if(m > 0) --m;
        else if(e + em > mh + h && em > 0) --em;
        else if(e + em < mh + h && mh > 0) --mh;
        else if(em > mh) --em;
        else --mh;

        ++cnt;
    }

    cout << cnt;

    return 0;
}