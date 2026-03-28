#include <bits/stdc++.h>
using namespace std;

//0-1, 0-2, 0-3, 1-2

const int n = 4;
bool a[n][n] = {
    {0, 1, 1, 1},
    {1, 0, 1, 0},
    {1, 1, 0, 0},
    {1, 0, 0, 0}
};

int main()
{
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(a[i][j]){
                //code
                //bfs(i);
                //dfs(i);
            }
        }
    }
}