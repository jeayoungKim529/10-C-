#include <bits/stdc++.h>

using namespace std;

vector<int> v(26, 0);

int main()
{
    string s;

    cin >> s;

    for (size_t i = 0; i < s.length(); i++){
        v[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++)
        cout << v[i] << ' ';


    return 0;
}