#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    size_t sum = 1;

    for(int i = 0; i < b; i++)
        sum = ((sum % c) * (a % c)) % c;
    cout << sum % c;
    return 0;
}