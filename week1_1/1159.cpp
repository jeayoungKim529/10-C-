#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v(26);

string cnt_five(){
    string s = "";
    for(int i = 0; i < 26; i++){
        if (v[i] >= 5)
            s += 'a'+ i;
    }
    if (s.length() == 0)
        return "PREDAJA";
    return s;
}

int main(){
    cin >> n;
    // if (n < 5){
    //     cout << "PREDAJA";
    //     return 0;
    // }

    for(int i = 0; i < n; i++){
        string firstname;
        cin >> firstname;

        v[firstname[0] - 'a']++;
    }
    cout << cnt_five();

    return 0;
}