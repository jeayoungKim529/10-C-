#include <bits/stdc++.h>
using namespace std;

int arr[105];

int main() {
    int a, b, c;
    
    cin >> a >> b >> c;
    
    for (int i = 0; i < 3; i++){
        int st, en;
        
        cin >> st >> en;
        
        for(int j = st; j < en; j++){
            arr[j]++;
        }
    }
    
    int cnt = 0;
    
    for(int i = 0; i < 100; i++){
        if (arr[i] == 3){
            cnt += 3 * c;
        }else if (arr[i] == 2){
            cnt += 2 * b;
        }else if (arr[i] == 1){
            cnt += a;
        }
    }

    cout << cnt << endl;
    
    return 0;
}