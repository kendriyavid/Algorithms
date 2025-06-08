//https://codeforces.com/problemset/problem/2094/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        int left=0;
        int right=0;
        if(m<=r){
            right+=m;
        }else{
            right+= m-(m-r);
        }
        if(m-r>0){
            left-=m-r;
        }
        cout<<left<<" "<<right<<endl;
    }
    return 0;
}