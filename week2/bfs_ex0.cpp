/*승원이는 당근을 좋아해서 당근마켓에 엔지니어로 취업했다.
당근을 매우 좋아하기 때문에 차도 당근차를 샀다.
이 당근차는 한 칸 움직일 때마다 당근을 내뿜으면서 간다.
즉, '한 칸' 움직일 때 '당근 한 개'가 소모된다는 것이다.
승원이는 오늘도 아침 9시에 일어나 당근 마켓으로 출근하고자 한다.
승원이는 최단거리로 당근마켓으로 향한다고 할 때, 당근 몇 개를 소모해야 당근 마켓에 갈 수 있는지 알아보자.
이 때 승원이는 육지로만 갈 수 있으며 바다로는 못 간다.
맵의 1은 육지며 0은 바다를 가리킨다.
승원이는 상하좌우로만 갈 수 있다.
//이 때 승원이의 시작위치(y, x)에서 당근 한 개가 이미 소모된 상태로 본다.
*/

#include <bits/stdc++.h>
using namespace std;

int n = 5, m = 5;
int y = 0, x = 0; //승원이의 시작 위치
int cy = 4, cx = 4; //당근 마켓 위치
vector<int> adj[5] = {
    {1, 0, 1, 0, 1},
    {1, 1, 1, 0, 1},
    {0, 0, 1, 1, 1},
    {0, 0, 1, 1, 1},
    {0, 0, 1, 1, 1}
};

int visited[5][5];
int dy[4] = {1, 0, -1, 0};
int dx[4] = {0, 1, 0, -1};

void bfs(int y, int x){
    queue<pair<int, int>> q;
    q.push({y, x});
    visited[y][x] = 1;

    while(q.size()){
        pair<int, int> p = q.front();
        q.pop();
        for (int i = 0; i < 4; i++){
            int ny = p.first + dy[i];
            int nx = p.second + dx[i];
            if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if (visited[ny][nx]) continue;
            visited[ny][nx] = visited[p.first][p.second] + 1;
            q.push({ny, nx});
        }
    }
}

int main(){
    bfs(y, x);

    cout << visited[cy][cx] << endl;

    return 0;
}
