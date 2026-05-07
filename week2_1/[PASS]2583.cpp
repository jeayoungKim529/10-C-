#include <bits/stdc++.h>
using namespace std;

int m, n, k;

int miro[105][105];
int visited[105][105];

int dy[4] = {1, 0, -1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int y, int x, int &w){
    visited[y][x] = 1;
    w++;
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= m || nx < 0 || nx >= n) continue;
        if(visited[ny][nx]) continue;
        if(miro[ny][nx] == 1)continue;
        dfs(ny, nx, w);
    }
}

int main(){
    cin >> m >> n >> k;
    for(int i = 0; i < k; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int y = y1; y < y2; y++)
            for (int x = x1; x < x2; x++)
                miro[y][x] = 1;
    }

    int cnt = 0;
    vector<int> widths;
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (visited[i][j]) continue;
            if (miro[i][j] == 1) continue;
            int width = 0;
            dfs(i, j, width);
            cnt++;
            widths.push_back(width);
        }
    }

    cout << cnt << endl;
    sort(widths.begin(), widths.end());
    for(int w: widths)
        cout << w << ' ';
    return 0;
}