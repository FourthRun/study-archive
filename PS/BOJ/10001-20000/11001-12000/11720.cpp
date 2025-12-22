#include <iostream>
#include <string>

using namespace std;

int main() {
    int size;
    int sum = 0;
    string numbers;

    cin >> size >> numbers;

    for(int i = 0; i < size; i++) {
        int number = numbers[i] - '0';

        sum += number;
    }
    // == for(char c : numbers)

    cout << sum;

    return 0;
}