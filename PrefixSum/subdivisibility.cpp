#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int tc=0;
    map<int,int> mp;
    mp[0]=1;
    int prefix=0;
    for(int i=0;i<n;i++){
        prefix+=vec[i];
        int remainder = prefix%n;
        if(mp.find(remainder)!=mp.end()){
            tc+=mp[remainder];
        }
        mp[remainder]++;
    }
    cout<<tc<<endl;
    return 0;
}