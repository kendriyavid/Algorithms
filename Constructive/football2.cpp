#include <bits/stdc++.h>
using namespace std;

int main(){


    int n;
    cin>>n;
    unordered_map <string,int> mp;
    for(int i=0;i<n;i++){
        string team;
        cin>>team;
        mp[team]++;
    }

    string won;
    int score=0;
    for(auto it:mp){
        if(score<it.second){
            won = it.first;
            score = it.second;
        }
    }

    cout<<won<<endl;

    return 0;
}