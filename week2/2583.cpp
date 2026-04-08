#include <bits/stdc++.h>
using namespace std;

int m, n, k, cnt;

int adj[105][105];
int visited[105][105];

int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};

void dfs(int cy, int cx){
    visited[cy][cx] = 1;
    cnt++;
    for (int i = 0; i < 4; i++){
        int ny = cy + dy[i];
        int nx = cx + dx[i];
        if (ny < 0 || nx < 0 || ny >= m || nx >= n) continue;
        if (visited[ny][nx]) continue;
        if (adj[ny][nx]) continue;
        dfs(ny, nx);
    }
}

// int dfs(int cy, int cx){
//     visited[cy][cx] = 1;
//     int rst = 1;
//     for(int i = 0; i < 4; i++){
//         int ny = cy + dy[i];
//         int nx = cx + dx[i];
//         if (ny < 0 || nx < 0 || ny >= n || nx >= m)continue;
//         if(visited[ny][nx]) continue;
//         if(adj[ny][nx])continue;
//         rst += dfs(ny, nx);
//     }
//     return rst;
// }

int main()
{
    cin >> m >> n >> k;

    for (int i = 0; i < k; i++){
        int stx, sty, fnx, fny;
        cin >> stx >> sty >> fnx >> fny;
        for(int y = sty; y < fny; y++){
            for(int x = stx; x < fnx; x++){
                adj[y][x] = 1;
            }
        }
    }

    vector<int> v;
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cnt = 0;
            if (visited[i][j])continue;
            if (adj[i][j]) continue;
            dfs(i, j);
            v.push_back(cnt);
        }
    }
    sort(v.begin(), v.end());
    cout << v.size() << endl;
    for(int c : v)
        cout << c << ' ';

    return 0;
}