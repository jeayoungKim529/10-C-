#include <bits/stdc++.h>
using namespace std;

const int V = 4;
vector<int> adj[V];
//list<int> adj보다 탐색할 때 시간복잡도 면에서 좋음

int main(){
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[0].push_back(3);

    adj[1].push_back(0);
    adj[1].push_back(2);

    adj[2].push_back(0);
    adj[2].push_back(1);

    adj[3].push_back(0);

    for(int i = 0; i < V; i++){
        for(int j = 0; j < adj[i].size(); j++){
            //code
        }
    }

    return 0;
}