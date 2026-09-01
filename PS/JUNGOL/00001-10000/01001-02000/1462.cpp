#include <iostream>
#include <string>
#include <queue>

using namespace std;

int r, c, nr, nc, nw;
int res = 0;
int nk = 0;
bool grid[51][51];
bool visit[51][51][2501];
int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

struct Rcw{
    int sr;
    int sc;
    int weight;
};

void bfs(int row, int col) {
    queue<Rcw> q;
    
    visit[row][col][nk] = true;

    q.push({row, col, 0});

    while(!q.empty()) {
        nw = q.front().weight;

        res = max(res, nw);
        
        for(int i = 0; i < 4; ++i) {
            nr = q.front().sr + dr[i];
            nc = q.front().sc + dc[i];

            if(0 < nr && nr <= r && 0 < nc && nc <= c) {
                if(!visit[nr][nc][nk] && grid[nr][nc]) {
                    visit[nr][nc][nk] = true;

                    q.push({nr, nc, nw + 1});
                }
            }
        }

        q.pop();
    }

}
 
int main() {
    string s;

    cin >> r >> c;

    for(int i = 1; i <= r; ++i) {
        cin >> s;

        for(int j = 1; j <= c; ++j) {
            if(s[j - 1] == 'L') {
                grid[i][j] = true;
            }
        }
    }

    for(int i = 1; i <= r; ++i) {
        for(int j = 1; j <= c; ++j) {
            if(grid[i][j]) bfs(i, j);

            ++nk;
        }
    }

    cout << res;

    return 0;
}