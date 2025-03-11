#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        if(mp.find(target-vec[i])!=mp.end()){
            cout<<mp[vec[i]]<<i<<endl;
            return 0;
        }
        mp[vec[i]]=i;
    }
    cout<<-1<<-1<<endl;
    return 0;
}