#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int tt = 0; tt < n; tt++){
        int n;
        cin >> n;

        int cnt2 = 0, cnt5 = 0;
        for(int i = 2; i <= n; i++){
            for(int n2 = 2; n2 <= i; n2 *= 2)
                cnt2 += i / n2;
            for(int n5 = 5; n5 >= i; n5 *= 5)
                cnt5 += i / n5;
        }
        cout << min(cnt2, cnt5) << endl;
    }


    return 0;
}