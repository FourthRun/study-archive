#include <iostream>
#include <queue>

using namespace std;

int arr[101][101];
// 0 = 비어 있음, 1 = 뱀, 2 = 사과

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pair<int, int> now;
    int n, k, l, x, y, time;
    int cnt = 0;
    int dir = 0; // 0 오른쪽, // 1 아래 // 2 왼쪽 // 3 위
    char c;
    queue<pair<int, int>> q;
    queue<pair<int, int>> snake;

    cin >> n >> k;

    for(int i = 0; i < k; ++i) {
        cin >> x >> y;

        arr[x][y] = 2;
    }
    
    cin >> l;

    for(int i = 0; i < l; ++i) {
        cin >> time >> c;

        if(c == 'D') q.push({time, 1});
        else q.push({time, -1});
    }

    now = {1, 1};
    snake.push(now);

    while(1) {
        ++cnt;

        // 머리 방향성에 따라 +-1;
        if(dir == 0) ++now.second;
        else if(dir == 1) ++now.first;
        else if(dir == 2) --now.second;
        else --now.first;

        // 벽이나 몸이면 break
        if(now.first < 1 || now.first > n || now.second < 1 || now.second > n || arr[now.first][now.second] == 1) break;

        // 비어있는 땅이면 몸 줄이기
        if(arr[now.first][now.second] == 0) {
            arr[snake.front().first][snake.front().second] = 0;

            snake.pop();
        } 

        // 뱀 머리 좌표 추가
        snake.push(now);
        arr[now.first][now.second] = 1;

        // 방향 조정
        if(q.front().first == cnt) {
            dir += q.front().second;

            if(dir == -1) dir = 3;
            else dir %= 4;

            q.pop();
        }
    }

    cout << cnt;

    return 0;
}