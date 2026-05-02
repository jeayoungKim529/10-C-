#include <bits/stdc++.h>
using namespace std;

int n, m;

map<int, string> num;
map<string, int> name;

int main(){
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        string s;
        cin >> s;
        num[i] = s;
        name[s] = i;
    }

    for (int i = 0; i < m; i++){
        char * s;
        cin >> s;
        if (isdigit(s[0])){
            cout << num[atoi(s)] << endl;
        }else {
            cout << name[s] << endl;
        }
    }

    return 0;
}