#include <bits/stdc++.h>
using namespace std;

//하나의 시작점
//가중치X

const int n = 100;
vector<int> adj[n];
int visited[n];
int nodeList[] = {10, 12, 14, 16, 18, 20, 22, 24};

void bfs(int u){
    queue<int> q;
    visited[u] = 1;
    q.push(u);

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

int main(){
    adj[10].push_back(12);
    adj[10].push_back(14);
    adj[10].push_back(16);

    adj[12].push_back(18);
    adj[12].push_back(20);

    adj[20].push_back(22);
    adj[20].push_back(24);

    bfs(10);

    for(int i : nodeList){
        cout << i << " : " << visited[i] << endl;
    }

    return 0;
}