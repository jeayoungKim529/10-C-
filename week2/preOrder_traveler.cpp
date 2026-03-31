//전위순회

#include <bits/stdc++.h>
using namespace std;

const int n = 5;
vector<int> adj[n];
int visited[n];

void preOrder(int here){
    if(visited[here] == 0){
        visited[here] = 1;
        if(adj[here].size() == 1)
            preOrder(adj[here][0]);
        if(adj[here].size() == 2){
            preOrder(adj[here][0]);
            preOrder(adj[here][1]);
        }
    }
}

int main(){
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[2].push_back(5);

    int root = 1;
    preOrder(root);

    return 0;
}