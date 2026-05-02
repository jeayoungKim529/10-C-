#include <bits/stdc++.h>
using namespace std;

int n;
string pattern;

int main(){
    cin >> n;
    cin >> pattern;
    for(int t = 0; t < n; t++){
        string s;
        cin >> s;

        bool flag = true;
        int i = 0, j = 0;
        while(flag && s[i] && pattern[j] && pattern[j] != '*'){
            if(s[i] != pattern[j])
                flag = false;
            i++; j++;
        }
        while(flag && s[i] && pattern[j] && ((s.length() - i) != (pattern.length() - j - 1))){
            i++;
        }
        j++;
        if (s.length() - i != pattern.length() - j)
            flag = false;
        while(flag && s[i] && pattern[j]){
            if (s[i] != pattern[j]){
                flag = false;
                break;
            }
            i++; j++;
        }
        
        if (flag)
            cout << "DA" << endl;
        else
            cout << "NE" << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int n;
// string pattern;

// int main(){
//     cin >> n;
//     cin >> pattern;
//     for(int t = 0; t < n; t++){
//         string s;
//         cin >> s;

//         bool flag = true;
//         int i = 0, j = 0;
//         while(flag && s[i] && pattern[j] && pattern[j] != '*'){
//             if(s[i] != pattern[j])
//                 flag = false;
//             i++; j++;
//         }
//         cout << s[i] << pattern[j] << endl;
//         while(flag && s[i] && pattern[j] && ((s.length() - i) != (pattern.length() - j))){
//             i++;
//         }
//         cout << s[i] << pattern[j] << endl;
//         i++; j++;
//         while(flag && s[i] && pattern[j]){
//             if (s[i] != pattern[j]){
//                 flag = false;
//                 break;
//             }
//             i++; j++;
//         }
        
//         if (flag)
//             cout << "DA" << endl;
//         else
//             cout << "NE" << endl;
//     }
//     return 0;
// }