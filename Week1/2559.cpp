#include <bits/stdc++.h>
using namespace std;

vector<int> temp;
vector<int> psum;

int main() {
    int n, k;
    int sum = 0;

    cin >> n >> k;

    psum.push_back(0);
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        temp.push_back(tmp);
        sum += tmp;
        psum.push_back(sum);
    }

    vector<int> ksum;

    for(int i = 0; i + k <= n; i++){
        ksum.push_back(psum[i + k] - psum[i]);
    }

    cout << *max_element(ksum.begin(), ksum.end());
    
    return 0;
}