#include <iostream>
#include <string>

using namespace std;

int w, h;
int cnt = 0;
bool board[21][21];
bool visit[21][21];
int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

void dfs(int r, int c) {
    visit[r][c] = true;
    ++cnt;

    for(int i = 0; i < 4; ++i) {
        int nr = r + dr[i];
        int nc = c + dc[i];

        if(nr >= 1 && nr <= h && nc >= 1 && nc <= w) {
            if(board[nr][nc] == 1 && visit[nr][nc] == false) dfs(nr, nc);
        }
    }
}

int main() {
    int r, c;
    string s;

    cin >> w >> h;

    for(int i = 1; i <= h; ++i) {
        cin >> s;

        for(int j = 1; j <= w; ++j) {
            if(s[j - 1] == '.') board[i][j] = 1;
            else if(s[j - 1] == '#') board[i][j] = 0;
            else if(s[j - 1] == '@') {
                board[i][j] = 1;
                r = i;
                c = j;
            }
        }
    }

    dfs(r, c);

    cout << cnt;

    return 0;
}