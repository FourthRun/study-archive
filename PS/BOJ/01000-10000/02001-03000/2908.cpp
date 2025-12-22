#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s1, s2;

    cin >> s1 >> s2;

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    if(stoi(s1) > stoi(s2)) cout << s1;
    else cout << s2;
    // 입력값의 가정이 세자리 수로 고정되어 있기 때문에 stoi를 빼도 상관 없음

    return 0;
}