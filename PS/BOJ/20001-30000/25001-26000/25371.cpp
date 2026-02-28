#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    long long n, k, t;
    long long sum = 0;
    string a, num, result;

    cin >> n >> k;

    while(n > 0) {
        t = n % k;

        n /= k;

        a += char(t + '0');
    }

    reverse(a.begin(), a.end());

    for(char c : a) {
        if(c != '0') num += c;
        else {
            if(!num.empty()) sum += stoll(num);
            
            num = "";
        }
    }

    if(!num.empty()) sum += stoll(num);

    while(sum > 0) {
        t = sum % k;

        sum /= k;

        result += char(t + '0');
    }

    reverse(result.begin(), result.end());

    cout << result;

    return 0;
}