#include <bits/stdc++.h>
using namespace std;

//다중 시작점
//가중치X

const int n = 100;
vector<int> adj[n];
int visited[n];

int nodeList[] = {10, 12, 14, 16, 18, 20, 22, 24};

void bfs(int u){
    queue<int> q;
    for(int i = 1; i <= 3; i++){ //시작점 모두 방문 후 시작
        visited[i] = 1;
        q.push(i);
    }
    while(q.size()){
        int u = q.front();
        q.pop();
        for(int v : adj[u]){
            if(visited[v])
                continue;
            visited[v] = visited[u] + 1;
            q.push(v);
        }
    }
}