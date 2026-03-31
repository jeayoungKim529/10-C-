#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> adj;
int visited[104][104];

int dy[4] = {1, 0, -1, 0};
int dx[4] = {0, 1, 0, -1};

void bfs(int y, int x){
    queue<pair<int, int>> q;
    q.push({y, x});
    visited[y][x] = 1;
    
    while(q.size()){
        pair<int, int> p = q.front(); q.pop();
        for (int i = 0; i < 4; i++){
            int ny = p.first + dy[i];
            int nx = p.second + dx[i];
            if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if (visited[ny][nx]) continue;
            if (adj[ny][nx] == '0')continue; 
            visited[ny][nx] = visited[p.first][p.second] + 1;
            q.push({ny, nx});
        }
    }
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            adj.push_back(s);
    }

    bfs(0, 0);

    cout << visited[n - 1][m - 1] << endl;

    return 0;
}