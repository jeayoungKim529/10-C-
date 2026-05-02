#include <bits/stdc++.h>
using namespace std;

queue<int> q;

int main(){
    int n, k;
    cin >> n >> k;

    int mx = -1e9;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        if (q.size() >= k){
            sum -= q.front();
            q.pop();
        }
        q.push(tmp);
        sum += tmp;
        mx = max(mx, sum);
    }
    cout << mx << endl;

    return 0;
}