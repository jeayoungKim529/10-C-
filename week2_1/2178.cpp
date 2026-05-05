#include <bits/stdc++.h>
using namespace std;

int n, m;
int visited[105][105];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
vector<string> miro;

void bfs(){
    visited[0][0] = 1;
    queue<pair<int, int>> q;
    q.push({0, 0});
    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (visited[nx][ny]) continue;
            if (miro[nx][ny] == '0') continue;
            q.push({nx, ny});
            visited[nx][ny] = visited[cx][cy] + 1;
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        miro.push_back(s);
    }

    bfs();
    cout << visited[n - 1][m - 1] << endl;

    return 0;
}