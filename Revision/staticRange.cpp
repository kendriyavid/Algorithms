#include <bits/stdc++.h>
using namespace std;

int query(int l, int r, vector<int> prefix){
    return prefix[r+1] - prefix[l];
}

int main(){
    int n;
    int q;
    cin>>n>>q;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    // prefixing
    vector<int>prefix (n+1);
    for(int i=1;i<=n;i++){
        prefix[i] = prefix[i-1]+vec[i-1];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<query(l,r,prefix)<<endl;
    }
    return 0;
}