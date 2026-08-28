#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int grid[250][250];
bool visit[250][250];
int dr[] = {1, -1, 0, 0};
int dc[] = {0, 0, -1, 1};
int nr, nc, r, c;
int cnt = 0;
vector<pair<int, int>> v;

void dfs(int row, int col) {
    visit[row][col] = true;

    if(grid[row][col] == 1) ++v[cnt].first;
    else if(grid[row][col] == 2) ++v[cnt].second;

    for(int i = 0; i < 4; ++i) {
        nr = row + dr[i];
        nc = col + dc[i];

        if(0 <= nr && nr < r && 0 <= nc && nc < c) {
            if(!visit[nr][nc] && grid[nr][nc] != -1) dfs(nr, nc);
        }
    }
}

int main() {
    int sheep = 0;
    int wolf = 0;
    string s;

    cin >> r >> c;

    for(int i = 0; i < r; ++i) {
        cin >> s;

        for(int j = 0; j < c; ++j) {
            if(s[j] == '.') grid[i][j] = 0;
            else if(s[j] == '#') grid[i][j] = -1;
            else if(s[j] == 'o') grid[i][j] = 1;
            else if(s[j] == 'v') grid[i][j] = 2;
        }
    }

    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            if(!visit[i][j]) {
                v.push_back({0, 0});

                dfs(i, j);

                ++cnt;
            }
        }
    }

    for(int i = 0; i < v.size(); ++i) {
        if(v[i].first > v[i].second) sheep += v[i].first;
        else wolf += v[i].second;   
    }

    cout << sheep << " " << wolf;

    return 0;
}