#include <bits/stdc++.h>
using namespace std;

int n, c;

unordered_map<int, int> um;
vector<pair<int, int>> v;

bool compare(pair<int, int> a, pair<int, int> b){
    if (a.second > b.second)
        return true;
    return false;
}

int main(){
    cin >> n >> c;

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        um[tmp]++;
    }

    for (pair<int, int> p : um){
        v.push_back({p.first, p.second});
    }

    for (pair<int, int> p : v){
        cout << p.first << ' ' << p.second << endl;
    }

    sort(v.begin(), v.end(), compare);

    for(pair<int, int> p : v){
        for(int i = 0; i < p.second; i++){
            cout << p.first << ' ';
        }
    }
    return 0;
}