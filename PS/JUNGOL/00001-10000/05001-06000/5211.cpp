#include <iostream>

using namespace std;

char store[] = {'A', 'B', 'C', 'A'};
char grid[9][9];
bool visit[9][9];
int res[9][9];
int dr[] = {-1, 0, 1, 0};
int dc[] = {0, 1, 0, -1}; 
int r, c;
bool check;

bool split(int row, int col, int dir) {
    int fr = row + dr[dir];
    int fc = col + dc[dir];

    int l_dir = (dir + 3) % 4;
    int r_dir = (dir + 1) % 4;

    int lr = row + dr[l_dir];
    int lc = col + dc[l_dir];

    int rr = row + dr[r_dir];
    int rc = col + dc[r_dir];

    bool check1 = (fr < 0 || fr >= r || fc < 0 || fc >= c || visit[fr][fc]);
    bool check2 = (0 <= lr && lr < r && 0 <= lc && lc < c && !visit[lr][lc]);
    bool check3 = (0 <= rr && rr < r && 0 <= rc && rc < c && !visit[rr][rc]);

    if(check1 && check2 && check3) return true;
    else return false;
}

void track(int row, int col, int cnt) {
    if(check) return;

    if(cnt == r * c) {
        check = true;

        return;
    }

    for(int i = 0; i < 4; ++i) {      
        int nr = row + dr[i];
        int nc = col + dc[i];

        if(0 <= nr && nr < r && 0 <= nc && nc < c) {
            if(!visit[nr][nc] && store[grid[row][col] - 'A' + 1] == grid[nr][nc]) {
                if(split(nr, nc, i)) continue;            

                visit[nr][nc] = true;

                res[nr][nc] = cnt + 1;

                track(nr, nc, cnt + 1);

                if(check) return;

                visit[nr][nc] = false;
            }
        }
    }
}

int main() { 
    cin >> r >> c;

    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < r; ++i) {
        if(!check) {
            visit[i][0] = true;
            res[i][0] = 1;

            track(i, 0, 1);

            visit[i][0] = false;
        }

        if(!check) {
            visit[i][c - 1] = true;
            res[i][c - 1] = 1;

            track(i, c - 1, 1);

            visit[i][c - 1] = false;
        }
    }

    for(int j = 0; j < c; ++j) {
        if(!check) {
            visit[0][j] = true;
            res[0][j] = 1;

            track(0, j, 1);

            visit[0][j] = false;
        }
        
        if(!check) {
            visit[r - 1][j] = true;
            res[r - 1][j] = 1;

            track(r - 1, j, 1);

            visit[r - 1][j] = false;
        }
    }

    if(check) {
        for(int i = 0; i < r; ++i) {
            for(int j = 0; j < c; ++j) {
                cout << res[i][j] << " ";
            }

            cout << "\n";
        }
    }
    else cout << "impossible";

    return 0;
}