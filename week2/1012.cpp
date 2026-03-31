#include <bits/stdc++.h>
using namespace std;

int t, n, m, k, x, y;
int adj[55][55];

int dy[4] = {1, 0, -1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int cy, int cx){
    adj[cy][cx] = 0;
    for (int i = 0; i < 4; i++){
        int ny = cy + dy[i];
        int nx = cx + dx[i];
        if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
        if (adj[ny][nx] == 0)continue;
        dfs(ny, nx);
    }
}

int main(){
    cin >> t;

    for(int tt = 0; tt < t; tt++){
        //입력
        cin >> m >> n >> k;
        //0으로 초기화
        for (int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                adj[i][j] = 0;
            }
        }
        for(int j = 0; j < k; j++){
            cin >> x >> y;
            adj[y][x] = 1;
        }

        //
        int res = 0;
        for (int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if (adj[i][j] == 0)
                    continue;
                res++;
                dfs(i, j);
            }
        }

        cout << res << endl;
    }

    return 0;
}