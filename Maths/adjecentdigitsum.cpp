//https://codeforces.com/problemset/problem/2067/A

#include <bits/stdc++.h>
using namespace std;

int main(){

    int cases;
    cin>>cases;
    while(cases--){
        int x,y;
        cin>>x>>y;

        if(x==y){
            // cout<<1<<endl;
            cout<<"NO"<<endl;
        }else if(abs(x-y)==1){
            // cout<<2<<endl;
            cout<<"YES"<<endl;
        }else if(y%9 == (x % 9) + 1){
            // cout<<3<<endl;
            cout<<"YES"<<endl;
        }else{
            // cout<<4<<endl;
            cout<<"no"<<endl;
        }
    }
    return 0;
}