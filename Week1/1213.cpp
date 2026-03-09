#include <bits/stdc++.h>
using namespace std;

string impossible = "I'm Sorry Hansoo";

int arr[100];
bool flag = true;

int main(){
    string s;

    cin >> s;

    for(char c : s) arr[c]++;

    int cnt = 0;
    string res;
    for (int c = 'A'; c <= 'Z'; c++){
        if(arr[c] & 1){
            cnt++;
            res = (char)c;
        }
    }
    if (cnt > 1)
        flag = false;
    for (int c = 'Z'; flag && c >= 'A'; c--){
        while(arr[c] > 1){
            res = (char)c + res;
            res += (char)c;
            arr[c] -= 2;
        }
    }
    if (!flag)
        cout << "I'm Sorry Hansoo" << endl;
    else
        cout << res << endl;

    return 0;
}