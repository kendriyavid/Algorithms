#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    unordered_map<int,int> mp;
    mp[0]=-1;
    int maxl=0;
    for(int i=0;i<n;i++){
        if(i>0){
            vec[i] = vec[i]+vec[i-1];
        }
        int remainder = vec[i]%7;
        if(mp.find(remainder)!=mp.end()){
            int length = i - mp[remainder]+1;
            if(length>maxl){
                maxl = length;
            }
        }else{
            mp[remainder] = i;
        }
    }
    cout<<maxl<<endl;
    return 0;
}