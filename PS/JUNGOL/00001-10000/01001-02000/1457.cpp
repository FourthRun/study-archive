#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int grid[101][101];
bool visit[101][101];
int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};
int n, m, res;
vector<int> v;

void dfs(int r, int c) {
    visit[r][c] = true;
    ++res;

    for(int i = 0; i < 4; ++i) {
        int nr = r + dr[i];
        int nc = c + dc[i];

        if(nr >= 0 && nr < m && nc >= 0 && nc < n) {
            if(grid[nr][nc] == 0 && !visit[nr][nc]) {
                dfs(nr, nc);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, c1, c2, r1, r2, y1, y2;

    cin >> m >> n >> k;

    for(int i = 0; i < k; ++i) {
        cin >> c1 >> y1 >> c2 >> y2;

        r1 = m - y1 - 1;
        r2 = m - y2 - 1;

        if(r1 > r2) swap(r1, r2);
        if(c1 > c2) swap(c1, c2);

        --c2;
        ++r1;

        for(int j = r1; j <= r2; ++j) {
            for(int l = c1; l <= c2; ++l) {
                grid[j][l] = -1;
            }
        }
    }

    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            if(grid[i][j] == 0 && visit[i][j] == false) {
                res = 0;

                dfs(i, j);

                v.push_back(res);
            }
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << "\n";

    for(int n : v) {
        cout << n << " ";
    }

    return 0;
}