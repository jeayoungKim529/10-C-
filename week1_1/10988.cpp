#include <bits/stdc++.h>
using namespace std;

int is_pelidrom(string s){
    for(int i =0; i < s.length() / 2; i++){
        if (s[i] != s[s.length() - 1 - i])
            return 0;
    }
    return 1;
}

int main(){
    string s;

    cin >> s;
    
    cout << is_pelidrom(s);

    return 0;
}