#include <bits/stdc++.h>
using namespace std;

map<char, int> m;

int is_alpha(char c){
    if ('a' <= c && c <= 'z')
        return 1;
    if ('A' <= c && c <= 'Z')
        return 2;
    return 0;
}

string abc = "abcdefghijklmnopqrstuvwxyz";
string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main() {
    string s;

    getline(cin, s);

    for (char c : s){
        if(is_alpha(c) == 1){
            cout << abc[((c - 'a') + 13) % 26];
        }else if (is_alpha(c) == 2){
            cout << ABC[((c - 'A') + 13) % 26];
        }else{
            cout << c;
        }
    }
    
    return 0;
}