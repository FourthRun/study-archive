#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int T, H, W, N;
    cin >> T;

    for(int i = 0; i < T; i++) {
        int floor, room;
        cin >> H >> W >> N;

        if(N % H == 0) { 
            floor = H;
            room = N / H;
        }
        else {
            floor = N % H;
            room = N / H + 1;
        }
        
        cout << floor << setfill('0') << setw(2) << room  << "\n";
    }

    return 0;
}