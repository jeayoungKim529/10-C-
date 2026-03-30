#include <bits/stdc++.h>
using namespace std;

//3 * 3맵을 입력받음
    //1과 0으로 이루어져 있으며 {0,0}은 무조건 1임을 보장
//{0, 0}부터 4방향을 기준으로 한칸씩 탐색
//방문한 정점은 다시 방문하지 않음

/*
1 0 1
1 0 1
0 1 1
*/

const int n = 3;
int a[n][n], visited[n][n];

const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

void bfs(int y, int x){
    visited[y][x] = 1;
    //code
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= n || nx < 0 || nx >= n) //범위 밖 지역
            continue;
        if(a[ny][nx] == 0) //0, 갈 수 없는 지역
            continue;
        if(visited[ny][nx]) //이미 방문한 지역
            continue;
        bfs(ny, nx);
    }
}

int main(){
    //입력받기
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    //시작
    bfs(0, 0);

    return 0;
}