#include <bits/stdc++.h>
using namespace std;

long long go(int a, int b, int c){
    if (b == 1)
        return a % c;
    long long num = go(a, b / 2, c) % c;
    num = (num * num) % c;
    if (b % 2) num = (num * a) % c;
    return num;
}

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    cout << go(a, b, c) << endl;

    return 0;
}