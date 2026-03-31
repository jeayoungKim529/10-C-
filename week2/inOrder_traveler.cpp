//중위순회

#include <bits/stdc++.h>
using namespace std;

const int n = 5;
vector<int> adj[n];
int visited[n];

void inOrder(int here){
    if(visited[here] == 0){
        if(adj[here].size() == 1){
            inOrder(adj[here][0]);
            visited[here] = 1;
        }
        else if(adj[here].size() == 2){
            inOrder(adj[here][0]);
            visited[here] = 1;
            inOrder(adj[here][1]);
        }else{
            visited[here] = 1;
        }
    }
}

int main(){
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[2].push_back(5);

    int root = 1;
    inOrder(root);

    return 0;
}