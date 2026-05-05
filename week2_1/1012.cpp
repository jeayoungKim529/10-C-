#include <bits/stdc++.h>
using namespace std;

int t, m, n, k;
int visited[55][55];
int miro[55][55];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void bfs(int y, int x){
    visited[y][x] = 1;
    queue<pair<int, int>> q;
    q.push({y, x});
    while(!q.empty()){
        int cy = q.front().first;
        int cx = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int ny = cy + dy[i];
            int nx = cx + dx[i];
            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (visited[ny][nx]) continue;
            if (miro[ny][nx] == 0) continue;
            q.push({ny, nx});
            visited[ny][nx] = 1;
        }
    }
}

int main(){
    cin >> t;
    for (int tt = 0; tt < t; tt++){
        
        cin >> m >> n >> k;
        fill(&miro[0][0], &miro[0][0] + n * m, 0);
        fill(&visited[0][0], &visited[0][0] + n * m, 0);
        for(int i = 0; i < k; i++){
            int x, y;
            cin >> x >> y;
            miro[y][x] = 1;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if (visited[i][j]) continue;
                if (miro[i][j] == 0) continue;
                bfs(i, j);
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}