#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    // prefixing 
    vector<int> prefix(n);
    prefix[0] =vec[0];
    for(int i=1;i<n;i++){
        prefix[i] = vec[i]+prefix[i-1];
    }
    int maxl= 0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        if(mp.find(vec[i]%7)!=mp.end()){
            int l = mp[vec[i]%7];
            maxl = max(maxl,i-l);
        }
        mp[vec[i]] = i;
    }
    cout<<maxl;
    return 0;
}