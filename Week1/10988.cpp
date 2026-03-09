#include <bits/stdc++.h>
using namespace std;

bool is_pelin(string s){
    for (int i = 0; i < s.length() / 2; i++){
        if (s[i] != s[s.length() - 1 - i]){
            return false;
        }
    }
    return true;
}


int main() {
    string s;

    cin >> s;

    cout << (int)is_pelin(s) << endl;
    
    return 0;
}