#include <bits/stdc++.h>
using namespace std;

void query(int l, int r, vector<int> &diffarr){
    // cout<<"called";
    diffarr[l]++;
    diffarr[r+1]--;
}

int main(){

    int n,k;
    cin>>n>>k;

    // difference array initialization
    vector<int> diffarr(n+1);
    // queries
    while(k--){
        int l,r;
        cin>>l>>r;
        query(l,r,diffarr);
    }
    // aggregating all the queries
    for(int i=1;i<=n;i++){
        diffarr[i]+= diffarr[i-1];
    }

    sort(diffarr.begin(),diffarr.end());
    cout<<diffarr[(n/2)+1]<<endl;

}