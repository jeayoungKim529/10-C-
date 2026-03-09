#include <bits/stdc++.h>
using namespace std;

map<char, int> m;

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        m[s[0]]++;
    }

    int cnt = 0;
    for(char c = 'a'; c <= 'z'; c++){
        if (m[c] >= 5){
            cout << c;
            cnt++;
        }
    }
    if (cnt == 0)
        cout << "PREDAJA";
    
    return 0;
}