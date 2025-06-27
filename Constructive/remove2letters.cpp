

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<string,int> mp;
        string left = "";
        string right = "";
        for(int i=0;i<=n-2;i++){
            left=s.substr(0,i);
            right=s.substr(i+2,n-i+2);
            mp[left+right]++;
        }
        int sum=0;
        for(auto x:mp){
            sum+=x.second;
        }
        cout<<sum<<endl;
    }
    return 0;
}