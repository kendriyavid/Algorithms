#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int maxl=0;
    vector<int> vec(n); 
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    map<int,int> mp;
    for(int i=0;i<n;i++){
        if(mp.find(vec[i]-1)!=mp.end()){
            mp[vec[i]] = mp[vec[i]-1]+1;
            maxl = max(mp[vec[i]],mp[vec[i]-1]);
        }
        else{
            mp[vec[i]]=1; 
        }
    }  
    cout<<maxl;
    return 0;
}