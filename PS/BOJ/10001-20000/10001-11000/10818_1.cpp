#include <iostream>

using namespace std;

int arr[1000001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int size;
    
    cin >> size;

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int minVal = arr[0];
    int maxVal = arr[0];

    for(int i = 1; i < size; i++) {
        if(minVal > arr[i]) minVal = arr[i];
        if(maxVal < arr[i]) maxVal = arr[i];
    }

    cout << minVal << " " << maxVal;

    return 0;
}