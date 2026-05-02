//getline(cin, s)

#include <bits/stdc++.h>
using namespace std;

string s;
string alph = "abcdefghijklmnopqrstuvwxyz";
string ALPH = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int is_alpha(char c){
    if ('a' <= c && c <= 'z')
        return 1;
    if('A' <= c && c <= 'Z')
        return 2;
    return 0;
}

int main(){
    getline(cin, s);
    string res;
    for(size_t i = 0; i < s.length(); i++){
        if (is_alpha(s[i]) == 1){
            res += alph[(s[i] - 'a' + 13) % 26];
        }else if (is_alpha(s[i]) == 2){
            res += ALPH[(s[i] - 'A' + 13) % 26];
        }else{
            res += s[i];
        }
    }
    cout << res;

    return 0;
}