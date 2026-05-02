#include <bits/stdc++.h>
using namespace std;

pair<int, int> find_fake(int total, vector<int> dwarfs)
{
    for(size_t i = 0; i < dwarfs.size(); i++){
        for(size_t j = i + 1; j < dwarfs.size(); j++){
            if (total - dwarfs[i] - dwarfs[j] == 100)
                return {i, j};
        }
    }
    return {0,0};
}

int main()
{
    vector<int> dwarfs;

    int total = 0;

    for (int i = 0; i < 9; i++){
        int tmp;
        cin >> tmp;
        total += tmp;
        dwarfs.push_back(tmp);
    }

    sort(dwarfs.begin(), dwarfs.end());

    pair<size_t, size_t> fake = find_fake(total, dwarfs);

    for (size_t i = 0; i < dwarfs.size(); i++){
        if(i == fake.first || i == fake.second){
            continue;
        }else{
            cout << dwarfs[i] << '\n';
        }
    }
    


    return 0;
}