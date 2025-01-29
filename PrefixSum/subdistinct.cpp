#include <bits/stdc++.h>
using namespace std;

int main(){


    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    map<int,int> mp;
    int tc=0;
    int j=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(mp.find(vec[i])==mp.end()){
            count++;
        }
        mp[vec[i]]++;
        // adjusting
        while(count>k){
            if(mp[vec[j]]==1){
                mp.erase(vec[j]);
                count--;
            }else{
                mp[vec[j]]--;
            }
            j++;
        }
        tc+=i-j+1;
    }
    cout<<tc<<endl;
    return 0;
}