// iterating over the map

#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,int> mp;
    mp[1] = 1;
    mp[2] = 2;
    mp[3] = 3;
    for(auto &it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}