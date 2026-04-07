#include <bits/stdc++.h>
using namespace std;

int n, max_n, res, h;
int adj[105][105];
int visited[105][105];

int dy[4] = {1, 0, -1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int cy, int cx){
    visited[cy][cx] = 1;
    for (int i = 0; i < 4; i++){
        int ny = cy + dy[i];
        int nx = cx + dx[i];
        if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
        if (visited[ny][nx]) continue;
        if (adj[ny][nx] <= h) continue;
        dfs(ny, nx);
    }
}

int main(){
    cin >> n;
    max_n = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> adj[i][j];
            max_n = max(adj[i][j], max_n);
        }
    }

    for (h = 0; h < max_n; h++){
        for(int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                visited[i][j] = 0;
            }
        }
        int t = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(visited[i][j]) continue;
                if(adj[i][j] <= h)continue;
                t++;
                dfs(i, j);
            }
        }
        res = max(res, t);
    }

    cout << res << endl;

    return 0;
}