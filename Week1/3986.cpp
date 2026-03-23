#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    stack<char> st;
    
    for(char c : s){
        if (!st.empty() && st.top() == c){
            st.pop();
            cout << "pop" << c << endl;
        }else {
            st.push(c);
            cout << "push" << c << endl;
        }
    }
    if (st.empty())
        return true;
    return false;
}

int main()
{
    int n;
    int res = 0;

    cin >> n;

    for (int i = 0; i < n; i++){
        string s;
        cin >> s;

        if (check(s))
            res++;
    }

    cout << res << endl;

    return 0;
}