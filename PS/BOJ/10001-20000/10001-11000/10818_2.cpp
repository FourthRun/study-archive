#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int size;
    int maxVal = -1000000;
    int minVal = 1000000;
    
    cin >> size;

    for(int i = 0; i < size; i++) {
        int temp;
        cin >> temp;

        if(maxVal < temp) maxVal = temp;
        if(minVal > temp) minVal = temp;
    }

    cout << minVal << " " << maxVal;

    return 0;
}