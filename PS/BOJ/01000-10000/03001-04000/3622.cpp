#include <iostream>

using namespace std;

int main() {
    int A, a, B, b, P;

    cin >> A >> a >> B >> b >> P;

    if((b >= A && P >= B) || (a >= B && P >= A || A + B <= P)) cout << "Yes";
    else cout << "No";

    return 0;
}