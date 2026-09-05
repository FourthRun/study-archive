#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

struct Rcw {
    int sr;
    int sc;
    int scnt;
};

int main() {
    int r, c, nr, nc, cnt;
    queue<Rcw> q;
    int cv = 0;

    cin >> r >> c;

    vector<string> grid(r);
    vector<vector<char>> visit(r, vector<char>(c));

    for(int i = 0; i < r; ++i) {
        cin >> grid[i];

        for(int j = 0; j < c; ++j) {
            if(grid[i][j] == '.') ++cv;
        }
    }

    for(int i = 0; i < r; ++i) {
        if(grid[i][0] == '.') {
            visit[i][0] = true;

            q.push({i, 0, 1});
        }
    }

    while(!q.empty()) {
        cnt = q.front().scnt;

        for(int i = 0; i < 4; ++i) {
            nr = q.front().sr + dr[i];
            nc = q.front().sc + dc[i];

            if(0 <= nr && nr < r && 0 <= nc && nc < c) {
                if(!visit[nr][nc] && grid[nr][nc] == '.') {
                    if(nc == c - 1) {
                        cout << cv - cnt - 1;

                        return 0;
                    }
                    else {
                        visit[nr][nc] = true;

                        q.push({nr, nc, cnt + 1});
                    }                    
                }
            }
        }

        q.pop();
    }

    cout << 0;

    return 0;
}