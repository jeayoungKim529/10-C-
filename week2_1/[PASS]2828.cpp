#include <bits/stdc++.h>
using namespace std;

int m, n, j;

int main(){
    cin >> n >> m;
    cin >> j;

    int cnt = 0;
    int basket = 1;
    for (int i = 0; i < j; i++){
        int apple;
        cin >> apple;
        if (basket <= apple && apple < basket + m)
            continue;
        if (apple < basket){
            cnt += basket - apple;
            basket = apple;
        }else { //basekt <= apple
            cnt += apple - (basket + m - 1);
            basket = apple - m + 1;
        }
    }
    cout << cnt << endl;

    return 0;
}