#include <iostream>
#include <queue>
#include <string>

using namespace std;

int r, c;
int grid[101][101];
bool visit[101][101];

int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, 1, -1};

struct Rcw {
    int row;
    int col;
    int weight;
};

void dfs(int ir, int ic) {
    queue<Rcw> q;
    int nr, nc, cnt;

    grid[ir][ic] = 3;
    visit[ir][ic] = true;

    q.push({ir, ic, 1});

    while(!q.empty()) {
        cnt = q.front().weight;

        for(int i = 0; i < 4; ++i) {
            nr = q.front().row + dr[i];
            nc = q.front().col + dc[i];

            if(0 < nr && nr <= r && 0 < nc && nc <= c) {
                if(!visit[nr][nc] && grid[nr][nc] != 0) {
                    
                    visit[nr][nc] = true;

                    grid[nr][nc] = cnt + 3;

                    q.push({nr, nc, cnt + 1});
                }
            }
        }

        q.pop();
    }
}

int main() {
    string s;
    int sr, sc;
    int res1 = 0;
    int res2 = 0;

    cin >> c >> r;

    for(int i = 1; i <= r; ++i) {
        cin >> s;

        for(int j = 1; j <= c; ++j) {
            grid[i][j] = s[j - 1] - '0';
        }
    }

    cin >> sc >> sr;

    dfs(sr, sc);

    for(int i = 1; i <= r; ++i) {
        for(int j = 1; j <= c; ++j) {
            res1 = max(res1, grid[i][j]);

            if(grid[i][j] == 1) ++res2;
        }
    }

    cout << res1 << "\n" << res2;

    return 0;
}