#include <bits/stdc++.h>
using namespace std;

int m, n, j, rst;

int dy[4] = {1, 0, -1, 0};
int dx[4] = {0, 1, 0, -1};

int main(){
    cin >> n >> m;
    cin >> j;

    int st = 1;
    // int en = m;
    int en;
    for(int i = 0; i < j; i++){
        int tmp;
        cin >> tmp;
        en = st + m - 1;
        if(tmp > en){
            rst += tmp - en;
            st += tmp - en;
        }else if (tmp < st){
            rst += st - tmp;
            st = tmp;
        }
    }

    cout << rst << endl;

    return 0;
}