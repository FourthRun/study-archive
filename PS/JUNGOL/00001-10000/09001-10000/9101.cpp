#include <iostream>

using namespace std;

void name(int n) {
    cout << "홍길동\n";

    if(n > 0) name(n - 1);
}

int main() {
    name(9);

    return 0;
}