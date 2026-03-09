#include <bits/stdc++.h>
using namespace std;

vector<int> height;

int main() {
    int sum = 0;
    bool flag = false;
    //입력
    for(int i = 0; i < 9; i++){
        int tmp;
        cin >> tmp;
        height.push_back(tmp);
        sum += tmp;
    }
    
    //정렬
    sort(height.begin(), height.end());
    
    //조합
    for(int i = 0; i < 9 && flag == false; i++){
        for(int j = i + 1; j < 9; j++){
            if (sum - height[i] - height[j] == 100){
                for(int k =0; k < 9; k++){
                    if(k != i && k != j)
                        cout << height[k] << endl;
                }
                flag = true;
                break;
            }
        }
    }

    return 0;
}