//후위 순회
//본인의 모든 자식 노드들을 방문하고 자신의 노드를 방문

#include <bits/stdc++.h>
using namespace std;

const int n = 5;
vector<int> adj[n];
int visited[n];

void postOrder(int here){
    if(visited[here] == 0){
        if(adj[here].size() == 1)
            postOrder(adj[here][0]);
        if(adj[here].size() == 2){
            postOrder(adj[here][0]);
            postOrder(adj[here][1]);
        }
        visited[here] = 1;
    }
}

int main(){
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[2].push_back(5);

    int root = 1;
    postOrder(root);

    return 0;
}