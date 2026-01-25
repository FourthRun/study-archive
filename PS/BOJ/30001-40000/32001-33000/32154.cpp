#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    if(n == 1) cout << "11\nA B C D E F G H J L M";
    else if(n == 2) cout << "9\nA C E F G H I L M";
    else if(n == 3) cout << "9\nA C E F G H I L M";
    else if(n == 4) cout << "9\nA B C E F G H L M";
    else if(n == 5) cout << "8\nA C E F G H L M";
    else if(n == 6) cout << "8\nA C E F G H L M";
    else if(n == 7) cout << "8\nA C E F G H L M";
    else if(n == 8) cout << "8\nA C E F G H L M";
    else if(n == 9) cout << "8\nA C E F G H L M";
    else cout << "8\nA B C F G H L M";

    return 0;
}