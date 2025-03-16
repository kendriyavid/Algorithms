#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    // subtracting 1
    for(int i=0;i<n;i++){
        vec[i]-=1;
    }
    // prefixing
    for(int i=1;i<n;i++){
        vec[i] = vec[i]+vec[i-1];
    }

    unordered_map<int,int> mp;
    int count=0;
    for(int i=0;i<n;i++){
        if(mp.find(vec[i])!=mp.end()){
            count+=mp[vec[i]];
        }
        mp[vec[i]]++;
    }
    cout<<count<<endl;
    return 0;
}