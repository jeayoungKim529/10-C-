#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

int main(){
    int n, m;

    cin >> n >> m;
    for (int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }

    int res = 0;

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] + arr[j] == m)
                res++;
        }
    }

    cout << res << endl;

    return 0;
}