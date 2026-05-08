#include <bits/stdc++.h>
using namespace std;

int is_aeiou(string s){
    for (int i = 0; i < s.length(); i++){
        switch(s[i]){
            case 'a': return i;
            case 'e': return i;
            case 'i': return i;
            case 'o': return i;
            case 'u': return i;
        }
    }

    return -1;
}

bool is_three(string s){
    string rst = "";
    for(char c : s){
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            rst += "0";
        else
            rst += "1";
    }
    if (rst.find("000") != string::npos)
        return false;
    else if (rst.find("111") != string::npos)
        return false;
    return true;
}

bool is_two(string s){
    for (int i = 0; i < s.length() - 1; i++)
        if(s[i] == s[i + 1] && (s[i] != 'e' && s[i] != 'o'))
            return false;
    return true;
}

int main(){
    string s;

    cin >> s;
    while(s != "end"){
        if (is_aeiou(s) < 0){
            cout << s << " is not acceptable1" << endl;
            cin >> s;
            continue;
        }
        if (!is_three(s)) {
            cout << s << " is not acceptable2" << endl;
            cin >> s;
            continue;
        }
        if (!is_two(s)){
            cout << s << " is not acceptable3" << endl;
            cin >> s;
            continue;
        }
        cout << s << " is acceptable" << endl;
        cin >> s;
    }

    return 0;
}

// a
// tv
// ptoui
// bontres
// zoggax
// wiinq
// eep
// houctuh
// end