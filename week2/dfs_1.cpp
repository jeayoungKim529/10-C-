#include <bits/stdc++.h>
using namespace std;

//종화는 21세기 유명한 방구쟁이다.
//종화는 방구를 낄 때 "이러다... 다 죽어!!"를 외치며 방구를 뀌는데 이렇게 방귀를 뀌었을 때 방귀는 상하좌우 네 방향으로 뻗어나가며 종화와 연결된 '육지'는 모두 다 오염된다.
//'바다'로는 방구가 갈 수 없다.
//맵이 주어졌을 때 종화가 "이러다... 다 죽어!!"를 최소한 몇 번 외쳐야 모든 육지를 오염시킬 수 있는지 말해보자.
//1은 육지며 0은 바다를 가리킨다.

const int n = 5;
vector<int> adj[n] = {
    {1, 0, 1, 0, 1},
    {1, 1, 0, 0, 1},
    {0, 0, 0, 1, 1},
    {0, 0, 0, 1, 1},
    {0, 1, 0, 0, 0}
};
int visited[n][n];

int dy[4] = {1, 0, -1, 0};
int dx[4] = {0, 1, 0, -1};

void bfs(int u, int v){
    adj[u][v] = 0;
    // visited[u][v] = 1;
    for(int i = 0; i < 4; i++){
        int nu = u + dy[i];
        int nv = v + dx[i];
        if (nu < 0 || nv < 0 || nu >= n || nv >= n) continue;
        if (adj[nu][nv] == 0) continue;
        // if (visited[nu][nv]) continue;
        bfs(nu, nv);
    }
}

int main(){
    int res = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(adj[i][j] == 1){
                res++;
                bfs(i, j);
            }
        }
    }
    cout << res << endl;
    return 0;
}