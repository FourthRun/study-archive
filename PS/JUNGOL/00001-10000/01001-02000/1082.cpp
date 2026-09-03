#include <iostream>
#include <string>
#include <queue>

using namespace std;

struct Rcw {
    int sr;
    int sc;
    int weight;
};


int grid[51][51];
bool visit[51][51];
int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

int main() {
    int r, c, nr, nc, cnt;
    int res = -1;
    string s;
    queue<Rcw> fire;
    queue<Rcw> player;

    cin >> r >> c;

    for(int i = 1; i <= r; ++i) {
        cin >> s;

        for(int j = 1; j <= c; ++j) {
            if(s[j - 1] == 'X') grid[i][j] = -1;
            else if(s[j - 1] == '*') {
                grid[i][j] = 1;
                
                fire.push({i, j, 0});
            }
            else if(s[j - 1] == 'D') grid[i][j] = 2;
            else if(s[j - 1] == 'S') {
                player.push({i, j, 0});

                visit[i][j] = true;
            }
        }
    }

    while(!player.empty()) {
        if(!fire.empty()) {
            if(fire.front().weight < player.front().weight) {
                cnt = fire.front().weight;

                for(int i = 0; i < 4; ++i) {
                    nr = fire.front().sr + dr[i];
                    nc = fire.front().sc + dc[i];

                    if(0 < nr && nr <= r && 0 < nc && nc <= c) {
                        if(grid[nr][nc] == 0) {
                            grid[nr][nc] = 1;

                            fire.push({nr, nc, cnt + 1});
                        }
                    }
                }

                fire.pop();
            }
            else {
                if(grid[player.front().sr][player.front().sc] == 1) {
                    player.pop();

                    continue;
                }

                if(grid[player.front().sr][player.front().sc] == 2) {
                    res = player.front().weight;
                    
                    break;
                }

                cnt = player.front().weight;

                for(int i = 0; i < 4; ++i) {
                    nr = player.front().sr + dr[i];
                    nc = player.front().sc + dc[i];

                    if(0 < nr && nr <= r && 0 < nc && nc <= c) {
                        if(!visit[nr][nc] && (grid[nr][nc] == 0 || grid[nr][nc] == 2)) {
                            visit[nr][nc] = true;

                            player.push({nr, nc, cnt + 1});
                        }
                    }
                }

                player.pop();
            }
            
        }
        else {
            if(grid[player.front().sr][player.front().sc] == 1) {
                player.pop();

                continue;
            }

            if(grid[player.front().sr][player.front().sc] == 2) {
                res = player.front().weight;
                
                break;
            }

            cnt = player.front().weight;

            for(int i = 0; i < 4; ++i) {
                nr = player.front().sr + dr[i];
                nc = player.front().sc + dc[i];

                if(0 < nr && nr <= r && 0 < nc && nc <= c) {
                    if(!visit[nr][nc] && (grid[nr][nc] == 0 || grid[nr][nc] == 2)) {
                        visit[nr][nc] = true;

                        player.push({nr, nc, cnt + 1});
                    }
                }
            }

            player.pop();
        }
    }

    

    if(res == -1) cout << "impossible";
    else cout << res;

    return 0;
}