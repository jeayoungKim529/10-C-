
#include <bits/stdc++.h>
using namespace std;

int n, h;

int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};

int miro[105][105];
int visited[105][105];

void dfs(int y, int x){
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
        if(visited[ny][nx]) continue;
        if(miro[ny][nx] < h) continue;
        dfs(ny, nx);
    }
}

int main(){
    cin >> n;

    int mn = 105, mx = 0;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> miro[i][j];
            mn = min(miro[i][j], mn);
            mx = max(miro[i][j], mx);
        }
    }

    int mx_cnt = 0;
    for (h = mn; h <= mx; h++){
        int cnt = 0;
        fill(&visited[0][0], &visited[0][0] + 105 * 105, 0);
        for(int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (visited[i][j]) continue;
                if (miro[i][j] < h) continue;
                dfs(i, j);
                cnt++;
            }
        }
        mx_cnt = max(mx_cnt, cnt);
    }
    cout << mx_cnt << endl;
    return 0;
}