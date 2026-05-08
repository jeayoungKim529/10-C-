#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> v;

bool compare(string a, string b){
    if (a.length() > b.length()) return false;
    if (a.length() < b.length()) return true;
    for (int i = 0; i < a.length() && i < b.length(); i++){
        if (a[i] < b[i]) return true;
    }
    return false;
}

int main(){
    cin >> n;

    for(int tt = 0; tt < n; tt++){
        string s;

        cin >> s;
        for (int i = 0; i < s.length(); i++){
            if (isdigit(s[i])){
                string num;
                if (s[i] == '0'){
                    num = '0';
                    while(s[i] == '0')
                        i++;
                }
                if (isdigit(s[i]))
                    num = "";
                while (isdigit(s[i])){
                    num += s[i];
                    i++;
                }
                v.push_back(num);
            }
        }
    }

    sort(v.begin(), v.end(), compare);
    for (string num : v)
        cout << num << endl;

    return 0;
}