#include <iostream>
#include <map>

using namespace std;

struct SUAPC{
    int solved;
    int score;
};

int main() {
    int n;
    map<int, SUAPC> m;

    m[1] = {12, 1600};
    m[2] = {11, 894};
    m[3] = {11, 1327};
    m[4] = {10, 1311};
    m[5] = {9, 1004};
    m[6] = {9, 1178};
    m[7] = {9, 1357};
    m[8] = {8, 837};
    m[9] = {7, 1055};
    m[10] = {6, 556};
    m[11] = {6, 773};

    cin >> n;

    cout << m[n].solved << " " << m[n].score;

    return 0;
}