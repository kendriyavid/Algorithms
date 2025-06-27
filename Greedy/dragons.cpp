#include <bits/stdc++.h>
using namespace std;

int main(){

    int s,n;
    cin>>s>>n;
    vector<pair<int,int>> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i].first>>vec[i].second;
    }

    sort(vec.begin(),vec.end());
    bool flag = true;
    int power = s;
    for(pair<int,int> p: vec){
        if(p.first<s){
            s+=p.second;
        }else{
            flag = false;
            break;
        }
    }   

    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}