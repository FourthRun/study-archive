#include <iostream>
#include <cmath>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pair<int, int> sinchon, daeheung, sogang, school;
    int q, t1, t2, t3, fastest, to_shinchon, to_daeheung, to_sogang, s1, s2, s3;

    cin >> sinchon.first >> sinchon.second >> daeheung.first >> daeheung.second >> sogang.first >> sogang.second >> q;

    while(q--) {
        s1 = 0;
        s2 = 0;
        s3 = 0;

        cin >> school.first >> school.second >> t1 >> t2 >> t3;

        to_shinchon = abs(school.first - sinchon.first) + abs(school.second - sinchon.second);
        to_daeheung = abs(school.first - daeheung.first) + abs(school.second - daeheung.second);
        to_sogang = abs(school.first - sogang.first) + abs(school.second - sogang.second);

        if(to_shinchon % t1 != 0) s1 = to_shinchon + t1 - (to_shinchon % t1);
        else s1 = to_shinchon;

        if(to_daeheung % t2 != 0) s2 = to_daeheung + t2 - (to_daeheung % t2);
        else s2 = to_daeheung;

        if(to_sogang % t3 != 0) s3 = to_sogang + t3 - (to_sogang % t3);
        else s3 = to_sogang;

        cout << min(s1, min(s2, s3)) << "\n";
    }

    return 0;
}