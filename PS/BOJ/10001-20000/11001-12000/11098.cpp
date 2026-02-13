#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
    int n, p;
    pair<int, string> player1, player2;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> p;
        player1 = {0, "temp"};

        for(int j = 0; j < p; j++) {
            cin >> player2.first >> player2.second;

            if(player1.first < player2.first) player1 = player2;
        }

        cout << player1.second << "\n";
    }

    return 0;
}