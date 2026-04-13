#include <iostream>

using namespace std;

int arr[5];

int main() {
    int n, x, y;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> x >> y;

        if(x == 0 || y == 0) ++arr[0];
        else if(x > 0 && y > 0) ++arr[1];
        else if(x < 0 && y > 0) ++arr[2];
        else if(x < 0 && y < 0) ++arr[3];
        else ++arr[4]; 
    }

    cout << "Q1: " << arr[1] << "\n";
    cout << "Q2: " << arr[2] << "\n";
    cout << "Q3: " << arr[3] << "\n";
    cout << "Q4: " << arr[4] << "\n";
    cout << "AXIS: " << arr[0];

    return 0;
}