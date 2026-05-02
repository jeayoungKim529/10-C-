#include <bits/stdc++.h>
using namespace std;

int a, b, c;

vector<int> v(104);

int main(){
    cin >> a >> b >> c;

    for(int i = 0; i < 3; i++){
        int st, en;
        cin >> st >> en;
        for(int j = st; j < en; j++){
            v[j]++;
        }
    }

    int cnt = 0;
    for(int i = 0; i < 100; i++){
        if(v[i] == 1){
            cnt += a;
        }else if (v[i] == 2){
            cnt += b * 2;
        }else if (v[i] == 3){
            cnt += c * 3;
        }
    }

    cout << cnt << endl;

    return 0;
}