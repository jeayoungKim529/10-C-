#include <bits/stdc++.h>
using namespace std;

//재귀함수

const int n = 6;
vector<int> adj[n];
int visited[n];

void dfs(int u){
    if(visited[u]) return;
    visited[u] = 1;
    //code
    for(int v : adj[u]){
        dfs(v);
    }
    return;
}

int main(){
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[4].push_back(2);
    adj[2].push_back(5);

    dfs(1);

    return 0;
}